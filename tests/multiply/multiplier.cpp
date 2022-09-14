#include <cstdlib>
#include <iostream>

#include "conception-orientee-objet/example-adder.hpp"

auto main(int argc, char **argv) -> int {
  if (argc == 3) {
    auto ret{0};
    auto first = std::atoi(argv[1]);
    auto second = std::atoi(argv[2]);
    for (auto i{0}; i < second; i++) {
      ret = coo::add(ret, first);
    }
    std::cout << first << " times " << second << " is: ";
    std::cout << ret << "\n";
    return EXIT_SUCCESS;
  }
  std::cerr << "This program needs 2 integers\n";
  return EXIT_FAILURE;
}
