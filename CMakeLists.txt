cmake_minimum_required(VERSION 3.3)
project(Euler)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --std=c++11")

add_executable(001 001.Multiples.of.3.and.5.cpp)
add_executable(002 002.Even.Fibonacci.numbers.cpp)