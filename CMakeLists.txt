cmake_minimum_required(VERSION 4.0)
project(NumericalAnalysis)

set(CMAKE_CXX_STANDARD 20)

add_executable(NumericalAnalysis main.cpp gauss_seidel.cpp newton.cpp)
