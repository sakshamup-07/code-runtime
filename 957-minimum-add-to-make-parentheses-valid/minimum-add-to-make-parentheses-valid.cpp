class Solution {
public:
    int minAddToMakeValid(string s) {
        int cnt =0;
        stack<char> st;
        for(auto it : s)
        {
            if(!st.empty() && it == ')' && st.top()=='(')
            {
                st.pop();
            }
            else st.push(it);
        }
        return st.size();
    }
};