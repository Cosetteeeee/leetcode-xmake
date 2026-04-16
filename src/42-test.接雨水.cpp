#include <vector>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>
namespace problem {
#include "42.接雨水.cpp"
}

auto solution = new problem::Solution();

TEST_CASE("42") {
  std::vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
  CHECK((solution->trap(height)) == 6);
}
