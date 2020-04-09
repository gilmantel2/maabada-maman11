# cmake_minimum_required(VERSION <specify CMake version here>)
project(Assignment-1 C)

set(CMAKE_C_STANDARD 90)
add_executable(Assignment-1-simple main.c sequence.c)
add_executable(Assignment-1-simple_test test.c sequence.c)