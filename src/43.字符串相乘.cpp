/*
 * @lc app=leetcode.cn id=43 lang=cpp
 *
 * [43] 字符串相乘
 */

#include <string>
#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
  string multiply(string num1, string num2) {
    int m = num1.size();
    int n = num2.size();
    vector<int> res(m + n, 0);
    for (int i = m - 1; i >= 0; i--) {
      for (int j = n - 1; j >= 0; j--) {
        res[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
        res[i + j] += res[i + j + 1] / 10;
        res[i + j + 1] = res[i + j + 1] % 10;
      }
    }
    int index = 0;
    while (index < res.size() && res[index] == 0) {
      index++;
    }
    if (index == res.size()) {
      return "0";
    }
    string ans;
    for (; index < res.size(); index++) {
      ans += res[index] + '0';
    }
    return ans;
  }
};
// @lc code=end
