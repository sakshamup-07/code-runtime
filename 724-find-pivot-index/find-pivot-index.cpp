class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum =0;
        int leftsum=0;
        int n = nums.size();
        for(auto &k : nums)
        {
            sum += k;
        }
        for(int i =0;i<n;i++)
        {
            if(leftsum == sum-leftsum-nums[i]) return i;
            leftsum += nums[i];
        }
        return -1;
    }
};