/*
 * @lc app=leetcode.cn id=28 lang=cpp
 *
 * [28] 找出字符串中第一个匹配项的下标
 */

#include <string>
using namespace std;
// @lc code=start
class Solution {
public:
  int strStr(string haystack, string needle) {
    int a = haystack.size();
    int b = needle.size();
    for (int i = 0; i + b <= a; i++) {
      bool flag = true;
      for (int j = 0; j < b; j++) {
        if (haystack[i + j] != needle[j]) {
          flag = false;
          break;
        }
      }
      if (flag) {
        return i;
      }
    }
    return -1;
  }
};

// @lc code=end
