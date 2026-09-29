class Solution {
public:
    int distributeCandies(vector<int>& fu) {
        int n = fu.size();
        set<int> st(fu.begin() , fu.end());
        int k = st.size();
        return min(k , n/2);
    }
};