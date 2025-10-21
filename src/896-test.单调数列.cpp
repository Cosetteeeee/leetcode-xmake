#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>
namespace problem {
#include "896.单调数列.cpp"
}

auto solution = new problem::Solution();

TEST_CASE("896") {
  std::vector<int> arr = {11, 11, 9, 4, 3, 3, 3, 1, -1, -1, 3, 3, 3, 5, 5, 5};
  CHECK((solution->isMonotonic(arr)) == false);
}
