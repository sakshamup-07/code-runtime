class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        auto mid = nums.begin() + n/2;
        for(int i =0;i<n;i++)
        {
            nums[i] = abs(nums[i]);
        }
        nth_element(nums.begin() , mid , nums.end());
        long long sum = 0;
        for(auto it = mid ; it != nums.end() ; it++)
        {
          sum += (*it) * (*it);
        }
        for(auto it = nums.begin() ; it != mid ; it++)
        {
          sum -= (*it) * (*it);
        }
        return sum;
    }
};