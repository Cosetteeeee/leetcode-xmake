#include <vector>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>
namespace problem {
#include "128.最长连续序列.cpp"
}

auto solution = new problem::Solution();

TEST_CASE("128") {
  std::vector<int> nums = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
  CHECK((solution->longestConsecutive(nums)) == 9);
}
