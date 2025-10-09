#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>
namespace problem {
#include "389.找不同.cpp"
}

auto solution = new problem::Solution();

TEST_CASE("2") {
  CHECK((solution->findTheDifference("abcd", "abcde")) == 'e');
}
