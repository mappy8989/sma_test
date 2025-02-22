#include "inc/sma.h"
#include <chrono>
#include <cstdint>
#include <iostream>
#include <random>
#include <thread>

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

int main(void)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<double> dis_double(0.0, 1000.0);

    std::vector<double> data_in_double(1000000);
    std::vector<float> data_in_float(1000000);
    for (int i = 0; i < data_in_double.size(); i++) {
        data_in_double.at(i) = dis_double(gen);
        data_in_float.at(i)  = static_cast<float>(data_in_double.at(i));
    }

    std::cout << "Tests:" << std::endl;
    std::vector<uint32_t> window_sizes = {4, 8, 16, 32, 64, 128};
    for (auto size : window_sizes) {
        std::cout << "Type float; window size " << size;
        std::cout << ": TEST "
                  << (is_sma_correct<float>(size) ? "Passed" : "Failed")
                  << std::endl;
        std::cout << "Perfomance (records per sec): "
                  << performance_test<float>(data_in_float, size) << std::endl
                  << std::endl;
    }

    std::cout << std::endl << std::endl;

    for (auto size : window_sizes) {
        std::cout << "Type double; window size " << size;
        std::cout << ": TEST "
                  << (is_sma_correct<double>(size) ? "Passed" : "Failed")
                  << std::endl;

        std::cout << "Perfomance (records per sec): "
                  << performance_test<double>(data_in_double, size) << std::endl
                  << std::endl;
    }

    return 0;
}