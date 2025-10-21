/*
 * @lc app=leetcode.cn id=896 lang=cpp
 *
 * [896] 单调数列
 */

#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
  bool isMonotonic(vector<int> &nums) {
    bool a = true, b = true;
    for (int i = 0; i < nums.size() - 1; i++) {
      if (nums[i] > nums[i + 1]) {
        a = false;
      }
      if (nums[i] < nums[i + 1]) {
        b = false;
      }
    }
    return a || b;
  }
};
// @lc code=end
