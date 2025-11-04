#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>
namespace problem {
#include "58.最后一个单词的长度.cpp"
}

auto solution = new problem::Solution();

TEST_CASE("58") {
  CHECK((solution->lengthOfLastWord("a")) == 1);
}
