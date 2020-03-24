cmake_minimum_required(VERSION 3.10 FATAL_ERROR)
project(travis-test LANGUAGES CXX)
add_executable(summation summation.cpp)
set_target_properties(summation PROPERTIES CXX_STANDARD 17 CXX_EXTENSIONS OFF CXX_STANDARD_REQUIRED ON)
