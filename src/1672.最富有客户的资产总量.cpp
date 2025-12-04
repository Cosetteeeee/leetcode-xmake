/*
 * @lc app=leetcode.cn id=1672 lang=cpp
 *
 * [1672] 最富有客户的资产总量
 */

#include <algorithm>
#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
  int maximumWealth(vector<vector<int>> &accounts) {
    int m = 0;
    for (auto row : accounts) {
      int sum = 0;
      for (auto val : row) {
        sum += val;
      }
      m = max(m, sum);
    }
    return m;
  }
};
// @lc code=end
