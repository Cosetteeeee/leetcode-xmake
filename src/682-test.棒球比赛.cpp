#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>
namespace problem {
#include "682.棒球比赛.cpp"
}

auto solution = new problem::Solution();

TEST_CASE("682") {
  std::vector<std::string> ops={"5","2","C","D","+"};
  CHECK((solution->calPoints(ops))==30); }
