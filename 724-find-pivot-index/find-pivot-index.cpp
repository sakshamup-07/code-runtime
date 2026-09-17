class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();

        for(int i = 0; i < n; i++)
        {
            int suml = 0;
            int sumr = 0;

            for(int j = 0; j < i; j++)
                suml += nums[j];

            for(int k = i + 1; k < n; k++)
                sumr += nums[k];

            if(suml == sumr)
                return i;
        }

        return -1;
    }
};