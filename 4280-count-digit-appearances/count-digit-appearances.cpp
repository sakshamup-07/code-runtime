class Solution {
public:
 int extractor(int n , int digit)
 {
    int cnt =0;
    while(n > 0)
    {
        int ld = n%10;
        if(ld==digit) cnt++;
        ld=0;
        n=n/10;
    }
    return cnt;
 }
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int an=0;
        for(auto& it : nums)
        {
           an+=extractor(it , digit);
        }
        return an;
    }
};