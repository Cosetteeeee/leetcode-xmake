/*
 * @lc app=leetcode.cn id=42 lang=cpp
 *
 * [42] 接雨水
 */

#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
  int trap(vector<int> &height) {
    int maxleft = height.front();
    int maxright = height.back();
    int tal = 0;
    for (int left = 0, right = height.size() - 1; left < right;) {
      if (height[left] <= height[right]) {
        if (height[left] < maxleft) {
          tal += maxleft - height[left];
        } else {
          maxleft = height[left];
        }
        left++;
      } else {
        if (height[right] < maxright) {
          tal += maxright - height[right];
        } else {
          maxright = height[right];
        }
        right--;
      }
    }
    return tal;
  }
};
// @lc code=end
