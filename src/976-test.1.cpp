#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>
#include <vector>
namespace problem {
#include "976.三角形的最大周长.cpp"
}

auto solution = new problem::Solution();

TEST_CASE("976") {
  CHECK((solution->largestPerimeter(*new std::vector<int>{2, 1, 2})) == 5);
}