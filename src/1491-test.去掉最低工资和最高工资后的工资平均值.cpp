#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>
namespace problem {
#include "1491.去掉最低工资和最高工资后的工资平均值.cpp"
}

auto solution = new problem::Solution();

TEST_CASE("1502") {
  std::vector<int> salary = {4000, 3000, 1000, 2000};
  CHECK((solution->average(salary)) == 2500.00000);
}
