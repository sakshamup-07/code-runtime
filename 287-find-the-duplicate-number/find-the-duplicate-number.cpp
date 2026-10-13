class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int n = nums.size();
        for(int i =0;i<n-1;i++)
        {
            if(nums[i+1]==nums[i]) return nums[i];
        }
        return nums[n-1];
    }
};