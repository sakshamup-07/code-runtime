class Solution {
public:
    int digitFrequencyScore(int n) {
        int sum = 0;
        while(n>0)
        {
            int ld = n%10;
            sum += ld;
            n=n/10;
        }
        return sum;
    }
};