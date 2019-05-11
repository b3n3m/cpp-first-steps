cmake_minimum_required(VERSION 3.10.0)
project(fibonacci VERSION 0.1.0 LANGUAGES CXX)

add_library(fibonacci
  fibonacci.hpp
  fibonacci.cpp
)

target_include_directories(fibonacci
  PUBLIC
    .
)

add_executable(main
  main.cpp
)

target_link_libraries(main
  PRIVATE
    fibonacci
)