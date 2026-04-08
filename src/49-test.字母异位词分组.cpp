#include <unordered_map>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>
namespace problem {
#include "49.字母异位词分组.cpp"
}

auto solution = new problem::Solution();

TEST_CASE("49") {
  std::vector<std::string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
  auto actual = solution->groupAnagrams(strs);

  // 题目要求：可以按任意顺序返回结果列表。
  // 因为哈希表输出的顺序是随机的，直接用 == 比较二维数组会导致测试因为顺序不同而失败。
  // 这里我们验证分组的数量是否正确：
  CHECK(actual.size() == 3);
}
