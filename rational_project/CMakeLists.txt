cmake_minimum_required(VERSION 3.0)
project(rational VERSION 0.1.0 LANGUAGES CXX)

add_library(rational INTERFACE)

target_include_directories(rational
  INTERFACE
  .
)

add_executable(main-test
  main.test.cpp
)

target_link_libraries(main-test
  PRIVATE
    rational
)