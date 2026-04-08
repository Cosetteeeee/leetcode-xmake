/*
 * @lc app=leetcode.cn id=49 lang=cpp
 *
 * [49] 字母异位词分组
 */

#include <algorithm>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
  vector<vector<string>> groupAnagrams(vector<string> &strs) {
    unordered_map<string, vector<string>> groups;
    for (auto &s : strs) {
      string key = s;
      sort(key.begin(), key.end());
      groups[key].push_back(s);
    }
    vector<vector<string>> res;
    for (auto &find : groups) {
      res.push_back(find.second);
    }
    return res;
  }
};
// @lc code=end
