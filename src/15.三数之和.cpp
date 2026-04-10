/*
 * @lc app=leetcode.cn id=15 lang=cpp
 *
 * [15] 三数之和
 */

#include <algorithm>
#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
  vector<vector<int>> threeSum(vector<int> &nums) {
    vector<vector<int>> res;
    int n = nums.size();
    sort(nums.begin(), nums.end());

    for (int i = 0; i < n - 2; i++) {
      if (i > 0 && nums[i] == nums[i - 1]) {
        continue;
      }
      for (int left = i + 1, right = n - 1; left < right;) {
        if ((long long)nums[i] + nums[left] + nums[right] == 0) {
          res.push_back({nums[i], nums[left], nums[right]});
          left++;
          right--;
          while (left < right && nums[left - 1] == nums[left]) {
            left++;
          }
          while (left < right && nums[right + 1] == nums[right]) {
            right--;
          }
        } else if (nums[i] + nums[left] + nums[right] < 0) {
          left++;
        } else {
          right--;
        }
      }
    }
    return res;
  }
};
// @lc code=end
