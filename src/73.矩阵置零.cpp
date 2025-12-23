/*
 * @lc app=leetcode.cn id=73 lang=cpp
 *
 * [73] 矩阵置零
 */

#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
  void setZeroes(vector<vector<int>> &matrix) {
    vector<bool> rz(matrix.size(),false);
    vector<bool> cz(matrix[0].size(),false);
    for (int i = 0; i < matrix.size(); i++) {
      for (int j = 0; j < matrix[0].size(); j++) {
        if (matrix[i][j] == 0) {
          rz[i]=true;
          cz[j]=true;
        }
      }
    }
    for (int i = 0; i < matrix.size(); i++) {
      for (int j = 0; j < matrix[0].size(); j++) {
        if (rz[i]==true||cz[j]==true) {
          matrix[i][j]=0;
        }
      }
    }
  }
};
// @lc code=end
