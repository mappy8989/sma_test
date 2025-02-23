cmake_minimum_required(VERSION 3.10)
project(SMA_TEST LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCE_FILES 
    ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp 
)

add_executable(sma_test ${SOURCE_FILES})

target_include_directories(sma_test PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/inc)

if(CMAKE_SYSTEM_PROCESSOR MATCHES "x86_64")
    target_link_libraries(sma_test ${CMAKE_CURRENT_SOURCE_DIR}/lib/x64/libAspose.Cells.so)
elseif(CMAKE_SYSTEM_PROCESSOR MATCHES "aarch64")
    target_link_libraries(sma_test ${CMAKE_CURRENT_SOURCE_DIR}/lib/aarch64/libAspose.Cells.so)
else()
    message(FATAL_ERROR "Unsupported architecture")
endif()


