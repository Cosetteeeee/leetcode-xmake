/*
 * @lc app=leetcode.cn id=682 lang=cpp
 *
 * [682] 棒球比赛
 */

#include <numeric>
#include <string>
#include <vector>
// @lc code=start
class Solution {
public:
  int calPoints(std::vector<std::string> &operations) {
    std::vector<int> score;
    for (auto &op : operations) {
      switch (op[0]) {
      case '+':
        score.push_back(score[score.size() - 2] + score.back());
        break;
      case 'D':
        score.push_back(score.back() * 2);
        break;
      case 'C':
        score.pop_back();
        break;
      default:
        score.push_back(stoi(op));
      }
    }
    return reduce(score.begin(), score.end(), 0);
  }
};
// @lc code=end
