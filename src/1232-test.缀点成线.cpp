#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>
namespace problem {
#include "1232.缀点成线.cpp"
}

auto solution = new problem::Solution();

TEST_CASE("1232") {
  std::vector<std::vector<int>> coordinates = {{1,2},{2,3},{3,4},{4,5},{5,6},{6,7}};
  CHECK((solution->checkStraightLine(coordinates)) == true);
}
