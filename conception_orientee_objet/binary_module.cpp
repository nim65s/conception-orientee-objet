#include <pybind11/pybind11.h>

#include "conception-orientee-objet/example-adder.hpp"

PYBIND11_MODULE(binary_module, m) { m.def("add", &coo::add); }
