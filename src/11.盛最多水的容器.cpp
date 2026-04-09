/*
 * @lc app=leetcode.cn id=11 lang=cpp
 *
 * [11] 盛最多水的容器
 */

#include <algorithm>
#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
  int maxArea(vector<int> &height) {
    int maxarea = 0;
    for (int left = 0, right = height.size() - 1; left < right;) {
      int curarea = (right - left) * min(height[left], height[right]);
      maxarea = max(curarea, maxarea);
      if (height[left] <= height[right]) {
        left++;
      } else {
        right--;
      }
    }
    return maxarea;
  }
};
// @lc code=end
