class Solution {
public:
    string reverseOnlyLetters(string s) {
        int l =0;
        int r = s.length()-1;
        while(l<r)
        {
            if(!isalpha((unsigned char)(s[l])))
            {
                l++;
            }
            else if(!isalpha((unsigned char)(s[r])))
            {
                r--;
            }
            else{ swap(s[l] , s[r]);
            l++;
            r--;
            }
        }
        return s;
    }
};