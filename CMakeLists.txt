#
# Minimum version
#
cmake_minimum_required(VERSION 3.10)

#
# Project name
#
project(extract_bits_native)

#
# C++ version
#
set(CMAKE_CXX_STANDARD 11)

#
#
#
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

#
#
#
#include_directories("${PROJECT_SOURCE_DIR}/src")

#
#
#
add_library(extract_bits_native SHARED ${PROJECT_SOURCE_DIR}/src/library.cpp ${PROJECT_SOURCE_DIR}/src/library.h)
