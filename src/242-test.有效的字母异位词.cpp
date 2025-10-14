#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>
namespace problem {
#include "242.有效的字母异位词.cpp"
}

auto solution = new problem::Solution();

TEST_CASE("242") {
  CHECK((solution->isAnagram("anagram", "nagaram")) == true);
}
