class Solution {
public:
    int digitFrequencyScore(int n) {
        int hash[11] = {0};
        int sum = 0;
        while(n>0)
        {
            int ld = n%10;
            hash[ld]++;
            n=n/10;
        }
        for(int i = 0 ; i<10;i++)
        {
            sum+=(i)*(hash[i]);
        }
        return sum;
    }
};