#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>
namespace problem {
#include "1523.在区间范围内统计奇数数目.cpp"
}

auto solution = new problem::Solution();

TEST_CASE("1523") { CHECK((solution->countOdds(3, 7)) == 3); }
