class Solution {
public:
    int maxDistinct(string s) {
        set<char> st;
        for(auto it : s)
        {
            st.insert(it);
        }
        return st.size();
    }
};