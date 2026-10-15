class Solution {
public:
int ghisu(int x , int y)
   {
    int ans =1;
    for(int i =1;i<=min(x , y);i++)
    {
        if(x%i==0 && y%i==0) ans=i;
    }
    return ans;
   }
    int findGCD(vector<int>& nums) {
        int maxi = *max_element(nums.begin() , nums.end());
        int mini = *min_element(nums.begin() , nums.end());
        return ghisu(maxi , mini);
    }
};