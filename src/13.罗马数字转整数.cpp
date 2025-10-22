/*
 * @lc app=leetcode.cn id=13 lang=cpp
 *
 * [13] 罗马数字转整数
 */

#include <string>
using namespace std;
// @lc code=start
class Solution {
public:
  int romanToInt(string s) {
    auto romanToInt = [](char c) -> int {
      switch (c) {
      case 'I':
        return 1;
      case 'V':
        return 5;
      case 'X':
        return 10;
      case 'L':
        return 50;
      case 'C':
        return 100;
      case 'D':
        return 500;
      case 'M':
        return 1000;
      default:
        return 0;
      }
    };
    int res = 0;
    for (int i = 0; i < s.size(); i++) {
      if (romanToInt(s[i]) < romanToInt(s[i + 1])) {
        res -= romanToInt(s[i]);
      } else {
        res += romanToInt(s[i]);
      }
    }
    return res;
  }
};
// @lc code=end
