#pragma once

#include <iostream>
#include <vector>

template <typename type>
void sma(std::vector<type> data_in, int window_size, std::vector<type> data_out)
{
    if (data_in.size() < window_size) {
        std::cout << "Input data size should be >= window_size" << std::endl;
        return;
    }
}