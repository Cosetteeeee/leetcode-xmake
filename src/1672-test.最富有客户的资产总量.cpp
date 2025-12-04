#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>
namespace problem {
#include "1672.最富有客户的资产总量.cpp"
}

auto solution = new problem::Solution();

TEST_CASE("1672") {
  std::vector<std::vector<int>> accounts = {{1, 2, 3}, {3, 2, 1}};
  CHECK((solution->maximumWealth(accounts)) == 6);
}
