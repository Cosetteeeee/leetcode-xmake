#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>
namespace problem {
#include "459.重复的子字符串.cpp"
}

auto solution = new problem::Solution();

TEST_CASE("459") {
  CHECK((solution->repeatedSubstringPattern("abab")) == true);
}
