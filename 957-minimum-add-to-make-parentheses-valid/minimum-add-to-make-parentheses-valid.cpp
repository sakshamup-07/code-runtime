class Solution {
public:
    int minAddToMakeValid(string s) {
        int n = s.size();
        int cnt  =0 ;
        int counter =0;
        for(auto it : s)
        {
            if(it =='(')
            {
                cnt++;
            }
            else if(it ==')' && cnt>0)
            {
                cnt--;
            } 
            else counter++;
        }
        return cnt+counter;
    }
};