class Solution {
public:
    int scoreOfString(string s) {
        int n = s.length();
        int ans =0;
        for(auto  i =0;i<n-1;i++)
        {
         ans+=abs(s[i] - s[i+1]);
        }
        return ans;
    }
};