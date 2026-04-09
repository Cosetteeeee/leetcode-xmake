#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>
namespace problem {
#include "11.盛最多水的容器.cpp"
}

auto solution = new problem::Solution();

TEST_CASE("11") {
  std::vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
  CHECK(solution->maxArea(height) == 49);
}