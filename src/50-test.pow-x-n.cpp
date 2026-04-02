#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>
namespace problem {
#include "50.pow-x-n.cpp"
}

auto solution = new problem::Solution();

TEST_CASE("50") {
  CHECK((solution->myPow(2.00000, 10)) == 1024.00000);
}
