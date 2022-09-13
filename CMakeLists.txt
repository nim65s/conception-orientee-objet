cmake_minimum_required(VERSION 3.18)

set(PROJECT_NAME Conception-Orientee-Objet)
string(TOLOWER ${PROJECT_NAME} PROJECT_NAME_LOWER)
string(REPLACE "-" "_" PYTHON_MODULE ${PROJECT_NAME_LOWER})

project(
  ${PROJECT_NAME}
  VERSION 0.1.0
  DESCRIPTION "example project for a class"
  HOMEPAGE_URL "https://github.com/nim65s/${PROJECT_NAME_LOWER}"
  LANGUAGES CXX)

include(CTest)

option(BUILD_PYTHON_INTERFACE "Build the python binding" ON)

add_library(example-adder SHARED include/${PROJECT_NAME_LOWER}/example-adder.hpp
                                 src/example-adder.cpp)

target_include_directories(
  example-adder PUBLIC $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include>
                       $<INSTALL_INTERFACE:include>)

add_executable(adder src/adder.cpp)
target_link_libraries(adder PUBLIC example-adder)

if(BUILD_PYTHON_INTERFACE)
  find_package(Python REQUIRED COMPONENTS Interpreter Development.Module)
  find_package(pybind11 REQUIRED)
  add_subdirectory(${PYTHON_MODULE})
endif()

if(BUILD_TESTING)
  add_subdirectory(tests)
endif()

install(TARGETS example-adder adder EXPORT ${PROJECT_NAME}Targets)

install(FILES include/${PROJECT_NAME_LOWER}/example-adder.hpp
        DESTINATION include/${PROJECT_NAME_LOWER})

install(
  EXPORT ${PROJECT_NAME}Targets
  NAMESPACE ${PROJECT_NAME}::
  DESTINATION lib/cmake/${PROJECT_NAME})

include(CMakePackageConfigHelpers)
configure_package_config_file(Config.cmake.in ${PROJECT_NAME}Config.cmake
                              INSTALL_DESTINATION lib/cmake/${PROJECT_NAME})
write_basic_package_version_file(${PROJECT_NAME}ConfigVersion.cmake
                                 COMPATIBILITY AnyNewerVersion)

install(FILES "${CMAKE_BINARY_DIR}/${PROJECT_NAME}Config.cmake"
              "${CMAKE_BINARY_DIR}/${PROJECT_NAME}ConfigVersion.cmake"
        DESTINATION lib/cmake/${PROJECT_NAME})
