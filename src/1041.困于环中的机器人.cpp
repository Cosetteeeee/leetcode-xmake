/*
 * @lc app=leetcode.cn id=1041 lang=cpp
 *
 * [1041] 困于环中的机器人
 */

#include <string>
#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
  bool isRobotBounded(string instructions) {
    vector<vector<int>> dir = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    int init = 0;
    int x = 0, y = 0;
    for (char ch : instructions) {
      if (ch == 'G') {
        x += dir[init][0];
        y += dir[init][1];
      } else if (ch == 'L') {
        init += 3;
        init %= 4;
      } else {
        init += 1;
        init %= 4;
      }
    }
    return init != 0 || (x == 0 && y == 0);
  }
};
// @lc code=end
