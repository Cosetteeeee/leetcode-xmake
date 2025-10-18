#include <vector>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>
namespace problem {
#include "66.加一.cpp"
}

auto solution = new problem::Solution();

TEST_CASE("66") {
  std::vector<int> digits = {8,9,9,9};
    CHECK((solution->plusOne(digits), digits == std::vector<int>{9,0,0,0}));
}
