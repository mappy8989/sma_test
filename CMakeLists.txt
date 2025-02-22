cmake_minimum_required(VERSION 3.10)
project(SMA_TEST LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


set(SOURCE_FILES 
    ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp 
    ${CMAKE_CURRENT_SOURCE_DIR}/src/sma.cpp
)

add_executable(sma_test ${SOURCE_FILES})

target_include_directories(sma_test PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/inc)

