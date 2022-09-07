cmake_minimum_required(VERSION 3.18)

project(
  Conception-Orientee-Objet
  VERSION 0.1.0
  DESCRIPTION "example project for a class"
  HOMEPAGE_URL "https://github.com/nim65s/conception-orientee-objet"
  LANGUAGES CXX)

include(CTest)

option(BUILD_PYTHON_INTERFACE "Build the python binding" ON)

add_library(
  example-adder SHARED include/conception-orientee-objet/example-adder.hpp
                       src/example-adder.cpp)

target_include_directories(
  example-adder PUBLIC $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include>)

add_executable(adder src/adder.cpp)
target_link_libraries(adder PUBLIC example-adder)

if(BUILD_PYTHON_INTERFACE)
  find_package(Python REQUIRED COMPONENTS Interpreter Development.Module)
  find_package(pybind11 REQUIRED)
  add_subdirectory(conception_orientee_objet)
endif()

if(BUILD_TESTING)
  add_subdirectory(tests)
endif()
