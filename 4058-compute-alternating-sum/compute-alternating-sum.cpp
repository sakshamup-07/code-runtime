class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int n = nums.size();
        int res=0;
        for(int i = 0 ;i<n;i+=2)
        {
            res+=nums[i];
        }
        for(int i = 1; i<n;i+=2)
        {
            res-=nums[i];
        }
        return res;
    }
};