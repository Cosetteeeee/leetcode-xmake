#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>
namespace problem {
#include "1.两数之和.cpp"
}

auto solution = new problem::Solution();

TEST_CASE("1") {
  std::vector<int> nums = {2, 7, 11, 15};
  int target = 9;
  CHECK(solution->twoSum(nums, target) == std::vector<int>{0, 1});
}
