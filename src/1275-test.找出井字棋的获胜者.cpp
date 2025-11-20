#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>
namespace problem {
#include "1275.找出井字棋的获胜者.cpp"
}

auto solution = new problem::Solution();

TEST_CASE("1275") {
  std::vector<std::vector<int>> moves = {
      {0, 0}, {2, 0}, {1, 1}, {2, 1}, {2, 2}};
  CHECK((solution->tictactoe(moves)) == "A");
}
