/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */

#include <utility>
#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
  void moveZeroes(vector<int> &nums) {
    int a=0;
    for(int i=0;i<nums.size();i++){
      if (nums[i]!=0){
      swap(nums[i],nums[a]);
      a++;
      }
    }
  }
};
// @lc code=end
