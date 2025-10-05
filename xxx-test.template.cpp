#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>
namespace problem {
#include "xxx.template.cpp"
}

auto solution = new problem::Solution();

TEST_CASE("xxxxxxxxxxx") {
  CHECK(
    // 布尔表达式
  );
}
