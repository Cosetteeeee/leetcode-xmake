#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>
namespace problem {
#include "1768.交替合并字符串.cpp"
}

auto solution = new problem::Solution();

TEST_CASE("xxxxxxxxxxx") {
  CHECK((solution->mergeAlternately("abc", "pqr")) == "apbqcr");
}
