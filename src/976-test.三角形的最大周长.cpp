#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>
namespace problem {
#include "976.三角形的最大周长.cpp"
}

auto solution = new problem::Solution();

TEST_CASE("976") {
  std::vector<int> nums = {1,2,1,10};
  CHECK((solution->largestPerimeter(nums)) == 0);
}
