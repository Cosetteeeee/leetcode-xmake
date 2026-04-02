#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>
namespace problem {
#include "43.字符串相乘.cpp"
}

auto solution = new problem::Solution();

TEST_CASE("43") {
  CHECK((solution->multiply("123", "456")) == "56088");
}
