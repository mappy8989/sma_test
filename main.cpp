// #include "inc/Aspose.Cells.h"
#include "inc/Aspose.Cells.h"
#include "inc/sma.h"
#include <chrono>
#include <cstdint>
#include <iostream>
#include <random>

using namespace Aspose::Cells;

template <typename T> bool is_sma_correct(uint32_t window_size);

template <typename T>
long performance_test(std::vector<T> &data_in, uint32_t window_size);

int main(void)
{
    // Create excel file with initial fields and graph
    Startup();
    Workbook workbook(FileFormatType::Xlsx);
    Worksheet sheet = workbook.GetWorksheets().Get(0);
    Cells cells     = sheet.GetCells();
    cells.Get(u"A1").PutValue(u"Window size / Type");
    cells.Get(0, 1).PutValue(u"Float");
    cells.Get(0, 2).PutValue(u"Double");

    int chartIndex = sheet.GetCharts().Add(ChartType::Line, 2, 4, 21, 15);
    Chart chart    = sheet.GetCharts().Get(chartIndex);
    chart.GetNSeries().Add(u"B2:B7", true);
    chart.GetNSeries().Add(u"C2:C7", true);
    chart.GetNSeries().SetCategoryData(u"A2:A7");
    chart.GetNSeries().Get(0).SetName(u"=B1");
    chart.GetNSeries().Get(1).SetName(u"=C1");
    chart.SetShowLegend(true);
    chart.GetTitle().SetText(u"Performance");
    ImageOrPrintOptions options;
    options.SetHorizontalResolution(300);
    options.SetVerticalResolution(300);

    // initialize random number generator
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<double> dis_double(0.0, 1000.0);

    // fill containers with random values
    std::vector<double> data_in_double(1000000);
    std::vector<float> data_in_float(1000000);
    for (int i = 0; i < data_in_double.size(); i++) {
        data_in_double.at(i) = dis_double(gen);
        data_in_float.at(i)  = static_cast<float>(data_in_double.at(i));
    }

    // start tests
    std::cout << "Tests:" << std::endl << std::endl;
    std::vector<uint32_t> window_sizes = {4, 8, 16, 32, 64, 128};

    int excel_row                = 1;
    long performance_test_double = 0;
    long performance_test_float  = 0;

    for (auto size : window_sizes) {
        std::cout << "Type float; window size " << size;
        std::cout << ": TEST "
                  << (is_sma_correct<float>(size) ? "Passed" : "Failed")
                  << std::endl;
        std::cout << "Perfomance (records per sec): "
                  << (performance_test_float =
                          performance_test<float>(data_in_float, size))
                  << std::endl
                  << std::endl;

        std::cout << "Type double; window size " << size;
        std::cout << ": TEST "
                  << (is_sma_correct<double>(size) ? "Passed" : "Failed")
                  << std::endl;

        std::cout << "Perfomance (records per sec): "
                  << (performance_test_double =
                          performance_test<double>(data_in_double, size))
                  << std::endl
                  << std::endl;

        // fill excel file with values
        cells.Get(excel_row, 0).PutValue((int32_t)size);
        cells.Get(excel_row, 1).PutValue((double)performance_test_float);
        cells.Get(excel_row, 2).PutValue((double)performance_test_double);
        excel_row++;
    }

    workbook.Save(u"../sma_test_results.xlsx");
    Aspose::Cells::Cleanup();

    return 0;
}

template <typename T>
long performance_test(std::vector<T> &data_in, uint32_t window_size)
{
    if (window_size > data_in.size() || !window_size) {
        return -1;
    }

    auto start_time    = std::chrono::system_clock::now();
    std::vector<T> sma = sma_calc(data_in, window_size);
    auto end_time      = std::chrono::system_clock::now();

    long duration_usec = (std::chrono::duration_cast<std::chrono::microseconds>(
                              end_time - start_time)
                              .count());
    long records_per_sec = (data_in.size() * 1000000) / duration_usec;

    return records_per_sec;
}

template <typename T> bool is_sma_correct(uint32_t window_size)
{
    const long DATA_IN_SIZE = 1000000;

    if (window_size > DATA_IN_SIZE || !window_size) {
        return false;
    }

    // fill data_in vectors with sequenced numbers for easy checks
    std::vector<T> data_in(1000000);
    for (int i = 0; i < data_in.size(); i++) {
        data_in.at(i) = (float)i;
    }

    // calculate first window average value
    T sum = 0;
    for (int i = 0; i < window_size; i++) {
        sum += data_in.at(i);
    }
    T mean_first = sum / window_size;

    std::vector<T> sma = sma_calc(data_in, window_size);

    T sma_expected = 0;
    for (int i = 0; i < data_in.size() - window_size + 1; i++) {
        sma_expected = mean_first + i;

        if (sma_expected != sma.at(i)) {
            return false;
        }
    }

    return true;
}