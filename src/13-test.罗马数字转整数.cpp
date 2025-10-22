#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>
namespace problem {
#include "13.罗马数字转整数.cpp"
}

auto solution = new problem::Solution();

TEST_CASE("13") {
  CHECK((solution->romanToInt("III")) == 3);
}
