class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int maxi = *max_element(nums.begin() , nums.end());
        int mini = *min_element(nums.begin() , nums.end());
        vector<int>ans;
        unordered_map<int , int> mpp;
        for(auto it : nums)
        {
            mpp[it]++;
        }
       for(int i = mini ; i<maxi;i++)
       {
        if(mpp.find(i)==mpp.end()) ans.emplace_back(i);
       }
       return ans;
    }
};