class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int cnt=0;
        int l = accumulate(nums.begin() , nums.end() , 0);
        while(l%k != 0)
        {
            l--;
            cnt++;
        }
        return cnt;
    }
};