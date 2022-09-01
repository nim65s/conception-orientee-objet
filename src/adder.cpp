#include <cstdlib>
#include <iostream>

#include "conception-orientee-objet/example-adder.hpp"

auto main(int argc, char **argv) -> int {
  if (argc == 3) {
    auto first = std::atoi(argv[1]);
    auto second = std::atoi(argv[2]);
    std::cout << "The sum of " << first << " and " << second << " is: ";
    std::cout << coo::add(first, second) << "\n";
    return EXIT_SUCCESS;
  }
  std::cerr << "This program needs 2 integers\n";
  return EXIT_FAILURE;
}
