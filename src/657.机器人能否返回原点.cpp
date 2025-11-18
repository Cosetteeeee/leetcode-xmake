/*
 * @lc app=leetcode.cn id=657 lang=cpp
 *
 * [657] 机器人能否返回原点
 */

#include <string>
using namespace std;
// @lc code=start
class Solution {
public:
  bool judgeCircle(string moves) {
    int r = 0, l = 0, u = 0, d = 0;
    for (auto s : moves) {
      switch (s) {
      case 'R':
        r++;
        break;
      case 'L':
        l++;
        break;
      case 'U':
        u++;
        break;
      case 'D':
        d++;
        break;
      default:
        break;
      }
    }
    if (r != l || u != d) {
      return false;
    }
    return true;
  }
};
// @lc code=end
