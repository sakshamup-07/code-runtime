class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        nums.reserve(2*nums.size());
        for(int i =nums.size()-1;i>=0;i--)
        {
            nums.emplace_back(nums[i]);
        }
        return nums;
    }
};