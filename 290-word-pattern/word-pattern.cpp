class Solution {
public:
    bool wordPattern(string pattern, string s) {
       int n = s.size();
       int m = pattern.length();
       vector<string> words;
       stringstream ss(s);
       string word;
       while(ss >> word) words.push_back(word);
       if( words.size() != m) return false;
       unordered_map<char , string>cts;
       unordered_map<string , char>stc;
       for(int i =0;i<m;i++)
       {
        char c = pattern[i];
        string j = words[i];

        if(stc.count(j) && stc[j] != c) return false;
        if(cts.count(c) && cts[c] !=j) return false;

        stc[j]=c;
        cts[c]=j;
       }
    return true;
    }
};