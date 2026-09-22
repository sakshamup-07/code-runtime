class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int len = s.length();
        if(len != t.size()) return false;
        vector<int> indexs(200 , 0);
        vector<int> indext(200 , 0);
        for(int i =0;i<len;i++)
        {
            if(indexs[s[i]] != indext[t[i]]) return false;
            indexs[s[i]] =i+1;
            indext[t[i]] =i+1;
        }
        return true;
    }
};