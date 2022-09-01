#include <cassert>

#include "conception-orientee-objet/example-adder.hpp"

auto main() -> int {
  assert(coo::add(1, 2) == 3);
  assert(coo::add(5, -1) == 4);
  assert(coo::add(-3, -1) == -4);
  return 0;
}
