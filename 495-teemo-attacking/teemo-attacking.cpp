class Solution {
public:
    int findPoisonedDuration(vector<int>& ts, int dur) {
        int n = ts.size();
        int cnt=0;
        for(int i =0;i<n-1;i++)
        {
            cnt +=min(dur , ts[i+1] - ts[i]);
        }
        return cnt+dur;
    }
};