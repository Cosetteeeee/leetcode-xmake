/*
 * @lc app=leetcode.cn id=1822 lang=cpp
 *
 * [1822] 数组元素积的符号
 */

#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
  int arraySign(vector<int> &nums) {
    int a = 0;
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] == 0) {
        return 0;
      } else if (nums[i] < 0) {
        a++;
      }
    }
    if (a%2==0) {
    return 1;
    }
    return -1;
  }
};
// @lc code=end
