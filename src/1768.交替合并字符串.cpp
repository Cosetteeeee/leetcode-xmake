/*
 * @lc app=leetcode.cn id=1768 lang=cpp
 *
 * [1768] 交替合并字符串
 */

#include <algorithm>
#include <string>
using namespace std;
// @lc code=start
class Solution {
public:
  string mergeAlternately(string word1, string word2) {
    string word3 = "";
    int len1 = word1.size();
    int len2 = word2.size();
    for (int i = 0; i < max(len1, len2); i++) {
      if (i < len1) {
        word3 += word1[i];
      }
      if (i < len2) {
        word3 += word2[i];
      }
    }
    return word3;
  }
};
// @lc code=end
