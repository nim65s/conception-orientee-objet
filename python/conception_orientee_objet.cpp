#include <boost/python.hpp>

#include "conception-orientee-objet/example-adder.hpp"

BOOST_PYTHON_MODULE(conception_orientee_objet) { boost::python::def("add", coo::add); }
