/*
 * @lc app=leetcode.cn id=389 lang=cpp
 *
 * [389] 找不同
 */

#include <string>
using namespace std;
// @lc code=start
class Solution {
public:
  char findTheDifference(string s, string t) {
    auto num = 0;
    for (int i = 0; i < t.size(); i++) {
      num += t[i];
    }
    for (int i = 0; i < s.size(); i++) {
      num -= s[i];
    }
    return num;
  };
};
// @lc code=end
