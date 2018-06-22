cmake_minimum_required(VERSION 3.10)
project(concatenation_to_x_y_for_gnuplot)

set(CMAKE_CXX_STANDARD 17)

add_executable(concatenation_to_x_y_for_gnuplot main.cpp concat.cpp concat.h)