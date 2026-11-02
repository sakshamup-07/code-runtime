class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int> NumsMap ;
        for (int i =0 ; i<nums.size() ; i++)
        {
            int complement = target - nums[i];
            if(NumsMap.count(complement)) return {i , NumsMap[complement]};
                NumsMap[nums[i]] = i;

        }
        return {};
        
    }
};