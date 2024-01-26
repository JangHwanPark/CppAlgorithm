cmake_minimum_required(VERSION 3.25)
project(CplusAlgorithm)

set(CMAKE_CXX_STANDARD 17)

add_executable(CplusAlgorithm main.cpp
        0000_BOJ/2675.cpp)

add_executable(0000_BOJ_tt 0000_BOJ/2675.cpp
        0000_BOJ/10951.cpp)
add_executable(main main.cpp)
add_executable(0000_BOJ_10951 0000_BOJ/10951.cpp)
add_executable(0000_BOJ_2675 0000_BOJ/2675.cpp)