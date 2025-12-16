/*
 * @lc app=leetcode.cn id=54 lang=cpp
 *
 * [54] 螺旋矩阵
 */

#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
  vector<int> spiralOrder(vector<vector<int>> &matrix) {
    vector<int> res;
    if (matrix.empty() || matrix[0].empty()) {
      return res;
    }
    int top = 0, bottom = matrix.size() - 1;
    int left = 0, right = matrix[0].size() - 1;
    while (left <= right && top <= bottom) {
      for (int col = left; col <= right; col++) {
        res.push_back(matrix[top][col]);
      }
      for (int row = top + 1; row <= bottom; row++) {
        res.push_back(matrix[row][right]);
      }
      if (left < right && top < bottom) {
        for (int col = right - 1; col > left; col--) {
          res.push_back(matrix[bottom][col]);
        }
        for (int row = bottom; row > top; row--) {
          res.push_back(matrix[row][left]);
        }
      }
      top++;
      left++;
      bottom--;
      right--;
    }
    return res;
  }
};
// @lc code=end
