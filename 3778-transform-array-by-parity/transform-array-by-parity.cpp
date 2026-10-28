class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int zr=0;
        for(auto& it : nums)
        {
            if(it%2==0) zr++;
        }
        for(int i = 0 ;i<nums.size();i++)
        {
            if(i<zr) nums[i]=0;
            else nums[i]=1;
        }
        return nums;
    }
};