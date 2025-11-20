/*
 * @lc app=leetcode.cn id=1275 lang=cpp
 *
 * [1275] 找出井字棋的获胜者
 */

#include <string>
#include <vector>

using namespace std;
// @lc code=start
class Solution {
public:
  string tictactoe(vector<vector<int>> &moves) {
    int s[3][3] = {0};
    for (int i = 0; i < moves.size(); i++) {
      int x = moves[i][0];
      int y = moves[i][1];
      if (i % 2 == 0) {
        s[x][y] = 1;
      } else {
        s[x][y] = -1;
      }
    }
    int sumD1 = s[0][0] + s[1][1] + s[2][2];
    int sumD2 = s[0][2] + s[1][1] + s[2][0];
    if (sumD1 == 3 || sumD2 == 3) {
      return "A";
    }
    if (sumD1 == -3 || sumD2 == -3) {
      return "B";
    }
    for (int i = 0; i < 3; i++) {
      int sumR = s[i][0] + s[i][1] + s[i][2];
      int sumC = s[0][i] + s[1][i] + s[2][i];
      if (sumR == 3 || sumC == 3) {
        return "A";
      }
      if (sumR == -3 || sumC == -3) {
        return "B";
      }
    }
    return moves.size() < 9 ? "Pending" : "Draw";
  }
};
// @lc code=end
