class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt =0;
        int maxi =0;
        for(auto it : nums)
        {
            if(it ==1)
            {
                cnt++;
                maxi=max(cnt , maxi);
            }
            else cnt=0;
        }
        return maxi;
    }
};