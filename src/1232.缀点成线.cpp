/*
 * @lc app=leetcode.cn id=1232 lang=cpp
 *
 * [1232] 缀点成线
 */

#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int dx=coordinates[1][0]-coordinates[0][0];
        int dy=coordinates[1][1]-coordinates[0][1];
        for (int i=2;i<coordinates.size();i++) {
            if ((coordinates[i][0]-coordinates[0][0])*dy!=(coordinates[i][1]-coordinates[0][1])*dx) {
                return false;
            }
        }
        return true;
    }
};
// @lc code=end

