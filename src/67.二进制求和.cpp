/*
 * @lc app=leetcode.cn id=67 lang=cpp
 *
 * [67] 二进制求和
 */

#include <string>
using namespace std;
// @lc code=start
class Solution {
public:
    string addBinary(string a, string b) {
        string res;
        int jin=0;

        for (int i=a.size()-1,j=b.size()-1; i>=0||j>=0||jin;i--,j--) {
            int sum=0;
            sum+=jin;
            jin=0;
            if (i>=0) {
                sum+=a[i]-'0';
            }
            if (j>=0) {
                sum+=b[j]-'0';
            }
            if (sum==2||sum==3) {
                sum-=2;
                jin=1;
            }
            if (sum==0) {
                res.insert(0,1,'0');
            }else {
                res.insert(0,1,'1');
            }
        }

        return res;
    }
};
// @lc code=end

