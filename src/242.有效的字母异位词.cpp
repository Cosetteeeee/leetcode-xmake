/*
 * @lc app=leetcode.cn id=242 lang=cpp
 *
 * [242] 有效的字母异位词
 */

#include <string>
#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
  bool isAnagram(string s, string t) {
    vector<int> m(26, 0);
    if (s.size() != t.size()) {
      return false;
    }
    for (char ch : s) {
      m[ch - 'a']++;
    }
    for (char ch : t) {
      m[ch - 'a']--;
      if (m[ch - 'a'] < 0) {
        return false;
      }
    }
    return true;
  }
};
// @lc code=end
