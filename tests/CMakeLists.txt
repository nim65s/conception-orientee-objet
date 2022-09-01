add_executable(test-add test-add.cpp)
add_test(NAME test-add COMMAND test-add)
target_link_libraries(test-add PUBLIC example-adder)
