/*
 * @lc app=leetcode.cn id=128 lang=cpp
 *
 * [128] 最长连续序列
 */

#include <algorithm>
#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
  int longestConsecutive(vector<int> &nums) {
    if (nums.size()==0) {
        return 0;
    }
    sort(nums.begin(), nums.end());
    int len = 1;
    int maxlen = 1;
    for (int i = 1; i < nums.size(); i++) {
      if (nums[i] - 1 == nums[i - 1]) {
        len++;
      } else if (nums[i] == nums[i - 1]) {
        continue;
      } else {
        maxlen = max(maxlen, len);
        len = 1;
      }
    }
    return max(maxlen, len);
  }
};
// @lc code=end
