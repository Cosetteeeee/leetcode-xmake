#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>
namespace problem {
#include "67.二进制求和.cpp"
}

auto solution = new problem::Solution();

TEST_CASE("67") {
  std::string a,b;
  CHECK((solution->addBinary(a="11",b="1")) == "100");
}
