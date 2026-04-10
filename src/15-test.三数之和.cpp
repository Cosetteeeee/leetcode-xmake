#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>
namespace problem {
#include "15.三数之和.cpp"
}

auto solution = new problem::Solution();

TEST_CASE("15") {
  std::vector<int> nums = {-1, 0, 1, 2, -1, -4};
  auto actual = solution->threeSum(nums);
  CHECK(actual.size() == 2);
}