class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int nums[10] = {0};
        int count =0;
        for(auto it : digits)
        {
            nums[it]++;
        }
        for(int i = 100 ; i< 1000 ; i+=2)
        {
        bool iseven = true;
            int a = i%10;
            int b = (i/10) % 10;
            int c = i/100;

            if(--nums[a] < 0) iseven = false;
            if(--nums[b] < 0) iseven = false;
            if(--nums[c] < 0) iseven = false;

            nums[a]++;
            nums[b]++;
            nums[c]++;

            if(iseven) count++;
        }
        return count;
    }
};