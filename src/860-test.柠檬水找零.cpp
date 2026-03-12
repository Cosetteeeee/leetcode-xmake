#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>
namespace problem {
#include "860.柠檬水找零.cpp"
}

auto solution = new problem::Solution();

TEST_CASE("860") {
  std::vector<int> bills = {5, 5, 5, 10, 20};
  CHECK((solution->lemonadeChange(bills)) == true);
}
