class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;
        for(int i = nums.size()-1;i>=0;i--)
        {
            int k = nums[i];
            while(k>0)
            {
                int ld = k%10;
                ans.emplace_back(ld);
                k=k/10;
            }
        }
        reverse(ans.begin() , ans.end());
        return ans;    
        }
};