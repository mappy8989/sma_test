#include "inc/sma.h"
#include <chrono>
#include <iostream>
#include <random>
#include <thread>

int main(void)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<double> dis(0.0, 1000.0);

    std::vector<double> data_in(1000000);
    for (int i = 0; i < data_in.size(); i++) {
        data_in.at(i) = dis(gen);
    }

    auto start_time         = std::chrono::system_clock::now();
    std::vector<double> sma = sma_calc(data_in, 16);
    auto end_time           = std::chrono::system_clock::now();

    auto differenceUs = std::chrono::duration_cast<std::chrono::microseconds>(
                            end_time - start_time)
                            .count();

    std::cout << differenceUs << std::endl;

    return 0;
}