/*
 * @lc app=leetcode.cn id=1491 lang=cpp
 *
 * [1491] 去掉最低工资和最高工资后的工资平均值
 */

#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
  double average(vector<int> &salary) {
    int max = salary[0], min = salary[0];
    double sum = 0;
    for (int i = 0; i < salary.size(); i++) {
      if (salary[i] > max) {
        max = salary[i];
      }
      if (salary[i] < min) {
        min = salary[i];
      }
      sum += salary[i];
    }
    return (sum - max - min) / (salary.size() - 2);
  }
};
// @lc code=end
