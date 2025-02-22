#pragma once

#include <iostream>
#include <vector>

template <typename type>
std::vector<type> sma_calc(std::vector<type> data_in, int window_size)
{
    if (data_in.size() < window_size || data_in.empty() || !window_size) {
        std::cout << "Incorrect input data" << std::endl;
        return {};
    }

    std::vector<type> data_out(data_in.size() - window_size + 1);

    // calculate first mean for 0 to window_size data points
    type sma_first = 0;
    for (int i = 0; i < window_size; i++) {
        sma_first += data_in[i];
    }
    sma_first      = sma_first / window_size;
    data_out.at(0) = sma_first;

    for (int i = 1; i < data_out.size(); i++) {
        data_out.at(i) = data_out.at(i - 1) +
                         (data_in.at(window_size - 1 + i) - data_in.at(i - 1)) /
                             window_size;    // according to formula from wiki
    }

    return data_out;
}