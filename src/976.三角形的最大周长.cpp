#include <algorithm>
#include <vector>

/*
 * @lc app=leetcode.cn id=976 lang=cpp
 *
 * [976] 三角形的最大周长
 */

// @lc code=start
class Solution {
private:
  int perimeter(int &a, int &b, int &c) { return a + b + c; }
  bool verify(int &a, int &b, int &c) {
    return (a < b + c) && (b < a + c) && (c < a + b);
  }

public:
  int largestPerimeter(std::vector<int> &nums) {
    std::ranges::sort(nums.begin(), nums.end(),
                      [](int a, int b) { return a > b; });
    for (int i = 0; i < nums.size() - 2; i++) {
      auto a = nums[i], b = nums[i + 1], c = nums[i + 2];
      if (this->verify(a, b, c)) {
        return this->perimeter(a, b, c);
      } else {
        continue;
      }
    }
    return 0;
  }
};
// @lc code=end
