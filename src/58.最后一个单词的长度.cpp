/*
 * @lc app=leetcode.cn id=58 lang=cpp
 *
 * [58] 最后一个单词的长度
 */

#include <string>
using namespace std;
// @lc code=start
class Solution {
public:
  int lengthOfLastWord(string s) {
    int i = s.size() - 1;
    while (s[i] == ' ') {
      i--;
    }
    int j = i - 1;
    while (j >= 0 && s[j] != ' ') {
      j--;
    }
    return i - j;
  }
};

// @lc code=end
