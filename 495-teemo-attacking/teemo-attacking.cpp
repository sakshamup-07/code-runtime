class Solution {
public:
    int findPoisonedDuration(vector<int>& ts, int dur) {
        int n = ts.size();
        int cnt=0;
        for(int i =0;i<n-1;i++)
        {
            if(ts[i+1] - ts[i]>=dur)
            {
                cnt+=dur;
            }
            else
            {
                cnt +=(ts[i+1] - ts[i]);
            }
        }
       cnt+=dur;
        return cnt;
    }
};