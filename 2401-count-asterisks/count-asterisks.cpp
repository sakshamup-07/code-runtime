class Solution {
public:
    int countAsterisks(string s) {
        bool flag = false;
        int cnt=0;
        for(auto it : s)
        {
            if(it == '|') flag = !flag;
            else if(it=='*' && !flag)
            {
                cnt++;
            }
        }
        return cnt;
    }
};