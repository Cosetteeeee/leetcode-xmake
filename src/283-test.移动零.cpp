#include <vector>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>
namespace problem {
#include "283.移动零.cpp"
}

auto solution = new problem::Solution();

TEST_CASE("283") {
  std::vector<int> nums = {0, 1, 0, 3, 12};
    CHECK((solution->moveZeroes(nums), nums == std::vector<int>{1, 3, 12, 0, 0}));
}
