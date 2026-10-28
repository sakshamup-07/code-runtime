class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        for(auto& it : nums)
        {
            if(it%2==0) it =0;
            else it = 1;
        }
        sort(nums.begin() , nums.end());
        return nums;
    }
};