#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>
namespace problem {
#include "1041.困于环中的机器人.cpp"
}

auto solution = new problem::Solution();

TEST_CASE("1041") {
  CHECK((solution->isRobotBounded("GGLLGG")) == true);
}
