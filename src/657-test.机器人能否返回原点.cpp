#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>
namespace problem {
#include "657.机器人能否返回原点.cpp"
}

auto solution = new problem::Solution();

TEST_CASE("657") {
  CHECK((solution->judgeCircle("UD")) == true);
}
