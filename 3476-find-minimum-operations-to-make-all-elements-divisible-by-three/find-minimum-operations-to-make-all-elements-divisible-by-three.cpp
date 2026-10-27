class Solution {
public:
    int minimumOperations(vector<int>& nums) {
      int n = nums.size();
      int cnt =0;
      for(auto it : nums)
      {
        int rem = it%3;
        cnt += min(rem, 3-rem);
      }
      return cnt;
    }
};