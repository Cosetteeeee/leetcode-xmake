#include <vector>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>
namespace problem {
#include "1822.数组元素积的符号.cpp"
}

auto solution = new problem::Solution();

TEST_CASE("283") {
  std::vector<int> nums = {-1,-2,-3,-4,3,2,1};
    CHECK((solution->arraySign(nums)==1));
}
