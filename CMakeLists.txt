cmake_minimum_required(VERSION 3.25)
project(CplusAlgorithm)

set(CMAKE_CXX_STANDARD 17)

add_executable(CplusAlgorithm main.cpp
        0001_BOJ/2675.cpp)

add_executable(0000_BOJ_tt 0001_BOJ/2675.cpp
        0001_BOJ/classII.cpp
        0001_BOJ/10818_mix_max.cpp
        0001_BOJ/2490.cpp
        0001_BOJ/2576.cpp
        0001_BOJ/10808.cpp
        0001_BOJ/2577.cpp
        0001_BOJ/10807.cpp)
add_executable(main main.cpp)
add_executable(0000_BOJ_10951 0001_BOJ/classII.cpp
        0000_basic/loop.cpp)
add_executable(0000_BOJ_2675 0001_BOJ/2675.cpp)
add_executable(0000_basic_loop 0000_basic/loop.cpp
        0000_basic/split.cpp
        0000_basic/bfs.cpp
        0000_basic/queue_stl.cpp)
add_executable(0001_BOJ_classII 0001_BOJ/classII.cpp)
add_executable(0001_BOJ_10818_mix_max 0001_BOJ/10818_mix_max.cpp)
add_executable(0000_basic_split 0000_basic/split.cpp)
add_executable(0000_basic_bfs 0000_basic/bfs.cpp
        0001_BOJ/1475.cpp)
add_executable(0001_BOJ_2490 0001_BOJ/2490.cpp)
add_executable(0001_BOJ_2576 0001_BOJ/2576.cpp)
add_executable(0001_BOJ_10808 0001_BOJ/10808.cpp)
add_executable(0001_BOJ_2577 0001_BOJ/2577.cpp)
add_executable(0001_BOJ_1475 0001_BOJ/1475.cpp)