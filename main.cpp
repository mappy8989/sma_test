#include <chrono>
#include <iostream>
#include <thread>

int main(void)
{
    auto start_time = std::chrono::system_clock::now();
    std::this_thread::sleep_for(std::chrono::seconds(2));
    auto end_time = std::chrono::system_clock::now();

    auto differenceUs = std::chrono::duration_cast<std::chrono::microseconds>(
                            end_time - start_time)
                            .count();

    std::cout << differenceUs / 1000000 << std::endl;

    return 0;
}