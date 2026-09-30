class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i =0;i<nums.size();i++)
        {
            int k =nums[i];
            int sum =0;
            while(k>0)
            {
                int ld = k%10;
                sum+=ld;
                k=k/10;
            }
            if(sum==i) return i;
        }
        return -1;
    }
};