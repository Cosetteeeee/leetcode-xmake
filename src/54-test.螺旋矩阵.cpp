#include <vector>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>
namespace problem {
#include "54.螺旋矩阵.cpp"
}

auto solution = new problem::Solution();

TEST_CASE("54") {
  std::vector<std::vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  CHECK((solution->spiralOrder(matrix)) ==
        std::vector<int>{1, 2, 3, 6, 9, 8, 7, 4, 5});
}
