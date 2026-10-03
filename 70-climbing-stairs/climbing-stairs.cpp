class Solution {
public:
    int climbStairs(int n) {
        static vector<int> dp(46 , -1);
        if(n==0) return 1;
        if(n==1) return 1;
        if(dp[n] != -1) return dp[n];
        int left = climbStairs(n-1);
        int right = climbStairs(n-2);
        return dp[n] = left + right;
        
    }
};