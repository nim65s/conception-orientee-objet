cmake_minimum_required(VERSION 3.18)

project(
  Conception-Orientee-Objet
  VERSION 0.1.0
  DESCRIPTION "example project for a class"
  HOMEPAGE_URL "https://github.com/nim65s/conception-orientee-objet"
  LANGUAGES CXX)

add_library(
  example-adder SHARED include/conception-orientee-objet/example-adder.hpp
                       src/example-adder.cpp)

target_include_directories(
  example-adder PUBLIC $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include>)
