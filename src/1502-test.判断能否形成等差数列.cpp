#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>
namespace problem {
#include "1502.判断能否形成等差数列.cpp"
}

auto solution = new problem::Solution();

TEST_CASE("242") {
  std::vector<int> arr = {-68, -96, -12, -40, 16};
  CHECK((solution->canMakeArithmeticProgression(arr)) == true);
}
