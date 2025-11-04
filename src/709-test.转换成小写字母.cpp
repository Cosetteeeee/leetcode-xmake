#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>
namespace problem {
#include "709.转换成小写字母.cpp"
}

auto solution = new problem::Solution();

TEST_CASE("709") { CHECK((solution->toLowerCase("LOVELY")) == "lovely"); }
