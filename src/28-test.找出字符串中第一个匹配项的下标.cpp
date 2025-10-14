#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>
namespace problem {
#include "28.找出字符串中第一个匹配项的下标.cpp"
}

auto solution = new problem::Solution();

TEST_CASE("28") {
  CHECK((solution->strStr("sadbutsad", "sad")) == 0);
}
