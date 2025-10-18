/*
 * @lc app=leetcode.cn id=66 lang=cpp
 *
 * [66] 加一
 */

#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
  vector<int> plusOne(vector<int> &digits) {
    if (digits[digits.size() - 1] == 9) {
      int a = digits.size() - 1;
      digits[digits.size() - 1] = 0;
      while (digits[a] == 0 && a > 0) {
        digits[a - 1]++;
        if (digits[a - 1] == 10) {
          digits[a - 1] = 0;
        }
        if (digits[0] == 0) {
          break;
        }
        a--;
      }
      if (digits[0] == 0) {
        digits.insert(digits.begin(), 1);
      }
    } else {
      digits[digits.size() - 1]++;
    }
    return digits;
  }
};
// @lc code=end
