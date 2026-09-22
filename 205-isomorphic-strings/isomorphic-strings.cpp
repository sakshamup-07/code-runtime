class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int len = s.length();
        if(len != t.size()) return false;
        vector<int> indexs(200 , -1);
        vector<int> indext(200 , -1);
        for(int i =0;i<len;i++)
        {
            if(indexs[s[i]] != indext[t[i]]) return false;
            indexs[s[i]] =i;
            indext[t[i]] =i;
        }
        return true;
    }
};