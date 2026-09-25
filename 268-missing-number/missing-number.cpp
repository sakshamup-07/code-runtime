class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = n*(n+1)/2;
        int sumer=0;
        for(auto it : nums)
        {
            sumer +=it;
        }
        return sum-sumer;
    }
};