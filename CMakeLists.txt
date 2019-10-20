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
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall")

#
# Set the source direcotry
#
set(CMAKE_SOURCE_DIR ${PROJECT_SOURCE_DIR}/src)
#
# Set the include direcotry
#
set(CMAKE_INCLUDE_CURRENT_DIR ${PROJECT_SOURCE_DIR}/include)
#
# Set the output direcotry]ies
#
set(CMAKE_BINARY_DIR ${PROJECT_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)
set(LIBRARY_OUTPUT_PATH ${CMAKE_LIBRARY_OUTPUT_DIRECTORY})

#
#
#
include_directories("${PROJECT_SOURCE_DIR}/include")

#
#
#
#add_library(extract_bits_native_lib SHARED
#                ${CMAKE_SOURCE_DIR}/main.cpp
#                ${CMAKE_SOURCE_DIR}/library.cpp
#                ${CMAKE_SOURCE_DIR}/extract_bits_traditional_pass.cpp
#                ${CMAKE_INCLUDE_CURRENT_DIR}/library.hpp
#                ${CMAKE_INCLUDE_CURRENT_DIR}/extractbits.hpp
#                ${CMAKE_INCLUDE_CURRENT_DIR}/extract_bits_traditional_pass.hpp)

add_executable(extract_bits_native
                ${CMAKE_SOURCE_DIR}/main.cpp
                ${CMAKE_INCLUDE_CURRENT_DIR}/extractbits.hpp
                ${CMAKE_INCLUDE_CURRENT_DIR}/extract_bits_traditional_pass.hpp
                ${CMAKE_SOURCE_DIR}/extract_bits.cpp
                ${CMAKE_SOURCE_DIR}/extract_bits_traditional_pass.cpp)
