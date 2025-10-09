/*
 * @lc app=leetcode.cn id=389 lang=cpp
 *
 * [389] 找不同
 */

#include <string>
using namespace std;
// @lc code=start
class Solution {
public:
  char findTheDifference(string s, string t) {
    int len1 = s.size();
    int len2 = t.size();
    for (int i = 0; i < len1; i++) {
      for (int j = 0; j < len2; j++) {
        if (t[j] == s[i]) {
          t[j] = ' ';
          break;
        }
      }
    }
    int e = 0;
    while (t[e] == ' ') {
      e++;
    }
    return t[e];
  };
};
// @lc code=end
