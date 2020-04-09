# cmake_minimum_required(VERSION <specify CMake version here>)
project(Assignment-2 C)

set(CMAKE_C_STANDARD 90)
add_executable(Assignment-2 main.c match.c)
add_executable(Assignment-2_test test.c match.c)