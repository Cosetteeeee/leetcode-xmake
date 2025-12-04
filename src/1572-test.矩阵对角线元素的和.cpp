#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>
namespace problem {
#include "1572.矩阵对角线元素的和.cpp"
}

auto solution = new problem::Solution();

TEST_CASE("1572") {
  std::vector<std::vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  CHECK((solution->diagonalSum(mat)) == 25);
}
