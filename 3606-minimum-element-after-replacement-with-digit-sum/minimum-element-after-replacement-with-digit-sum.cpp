class Solution {
public:
    int digiex(int n)
    {
        int res = 0;
        while(n>0)
        {
            int ld = n%10;
            res +=ld;
            n=n/10;
        }
        return res;
    }
    int minElement(vector<int>& nums) {
        int mini = 10000;
        for(int i = 0 ; i<nums.size() ; i++)
        {
            nums[i]=digiex(nums[i]);
            mini = min(mini , nums[i]);
        }
        return mini;
    }
};