class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int n = nums.size();
        for(int i =0;i<nums.size()-1;i++)
        {
           if(nums[i] == nums[i+1]) return true;
        }   
        if(n != 1 && nums[n-2]==nums[n-1]) return true;
      return false;
         }
};