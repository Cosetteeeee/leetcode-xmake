/*
 * @lc app=leetcode.cn id=1572 lang=cpp
 *
 * [1572] 矩阵对角线元素的和
 */

#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
  int diagonalSum(vector<vector<int>> &mat) {
    int sum = 0;
    for (int i = 0; i < mat.size(); i++) {
      sum += mat[i][i];
    }
    for (int j = mat.size() - 1; j >= 0; j--) {
      if (mat.size() - 1 - j == j) {
        continue;
      }
      sum += mat[mat.size() - 1 - j][j];
    }
    return sum;
  }
};
// @lc code=end
