class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        sort(nums.begin() , nums.end());
        vector<vector<int>> result;
        int n = nums.size();
        for(int i =0;i<n;i++)
        {
          if(!result.empty() && result.back()[1] >= nums[i][0])
          {
            result.back()[1] = max(nums[i][1] , result.back()[1]);
          }
          else
          {
            result.emplace_back(nums[i]);
          }
        }
        return result;
    }
};