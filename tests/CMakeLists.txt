add_executable(test-add test-add.cpp)
add_test(NAME test-add COMMAND test-add)
target_link_libraries(test-add PUBLIC example-adder)

if(BUILD_PYTHON_INTERFACE)
  add_test(
    NAME test-python
    COMMAND ${Python_EXECUTABLE} -m unittest
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})
  set_tests_properties(test-python PROPERTIES ENVIRONMENT
                                              PYTHONPATH=${CMAKE_BINARY_DIR})
endif()
