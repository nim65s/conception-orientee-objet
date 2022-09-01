#include <boost/python.hpp>

#include "conception-orientee-objet/example-adder.hpp"

BOOST_PYTHON_MODULE(binary_module) { boost::python::def("add", coo::add); }
