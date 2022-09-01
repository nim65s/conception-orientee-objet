python_add_library(conception_orientee_objet MODULE WITH_SOABI
                   conception_orientee_objet.cpp)
target_link_libraries(conception_orientee_objet PUBLIC example-adder
                                                       Boost::python)
