class Solution {
public:
    int maxDepth(string s) {
        int n = s.length();
        int cnt =0;
        int maxi= 0;
        int maxer=0;
        for(auto it : s)
        {
            if(it=='(') cnt++;
            {
            maxi=cnt;
            }
            if(it ==')') cnt--;
            {
            maxer=max(maxi , maxer);
            maxi=0;
            }
        }
        return maxer;
    }
};