cmake_minimum_required(VERSION 3.10 FATAL_ERROR)
project(factorial VERSION 0.1.0 LANGUAGES CXX)

add_executable(factorial
  main.cpp
  factorial.cpp
  to_int.cpp
  factorial.hpp
  )
