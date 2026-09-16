class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        map<int , int> mpp;
        int n = nums.size();
        if(n%k != 0) return false;
        for(int &it : nums)
        {
            mpp[it]++;
        }
       while(!mpp.empty())
       {
        int curr = mpp.begin()->first;
        for(int i =0;i<k;i++)
        {
            if(mpp[curr+i]==0) return false;
            mpp[curr+i]--;
            if(mpp[curr+i]<1) mpp.erase(curr+i);
        }
       }
       return true;
    }
};