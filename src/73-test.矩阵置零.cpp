#include <vector>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>
namespace problem {
#include "73.矩阵置零.cpp"
}

auto solution = new problem::Solution();

TEST_CASE("73") {
  std::vector<std::vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
  std::vector<std::vector<int>> expected = {{1, 0, 1}, {0, 0, 0}, {1, 0, 1}};
  solution->setZeroes(matrix);
  CHECK(matrix == expected);
}
