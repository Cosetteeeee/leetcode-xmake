/*
 * @lc app=leetcode.cn id=50 lang=cpp
 *
 * [50] Pow(x, n)
 */

// @lc code=start
class Solution {
public:
    double myPow(double x, int n) {
        long long m=n;
        if (m==0) {
            return 1.0;
        }
        if (m<0) {
            x=1/x;
            m=-m;
        }
        double half= myPow(x, m/2);
        if (m%2==0) {
            return half*half;
        }else{
            return half*half*x;
        }
    }
};
// @lc code=end

