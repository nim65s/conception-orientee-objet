cmake_minimum_required(VERSION 3.18)

project(
  Multiply
  VERSION 0.1.0
  DESCRIPTION "project to test Conception-Orientee-Objet"
  LANGUAGES CXX)

find_package(Conception-Orientee-Objet REQUIRED)

add_executable(multiplier multiplier.cpp)
target_link_libraries(multiplier
                      PUBLIC Conception-Orientee-Objet::example-adder)
