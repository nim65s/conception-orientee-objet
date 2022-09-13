python_add_library(binary_module MODULE WITH_SOABI binary_module.cpp)
target_link_libraries(binary_module PUBLIC example-adder pybind11::module)

file(CREATE_LINK ${CMAKE_CURRENT_SOURCE_DIR}/__init__.py
     ${CMAKE_CURRENT_BINARY_DIR}/__init__.py SYMBOLIC)

set(PYTHON_MODULE
    "lib/python${Python_VERSION_MAJOR}.${Python_VERSION_MINOR}/site-packages/conception_orientee_objet"
)

install(TARGETS binary_module DESTINATION ${PYTHON_MODULE})
install(FILES __init__.py DESTINATION ${PYTHON_MODULE})
