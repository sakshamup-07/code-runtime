class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            nums[i] = abs(nums[i]);
        }
        sort(nums.begin(), nums.end());
        long long sum = 0;
        int n = nums.size();
        for (int i = n - 1; i >= n / 2; i--) {
            sum += nums[i] * nums[i];
        }
        for (int i = 0; i < n / 2; i++) {
            sum -= nums[i] * nums[i];
        }
        return sum;
    }
};