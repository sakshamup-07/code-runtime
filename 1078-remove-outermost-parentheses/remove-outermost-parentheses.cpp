class Solution {
public:
    string removeOuterParentheses(string s) {
        int opened = 0;
        string ans;
        for (auto it : s) {
            if (it == '(') {
                if (opened > 0) {
                    ans += it;
                }
                opened++;
            } else {
                opened--;
                if (opened > 0) {
                    ans += it;
                }
            }
        }
        return ans;
    }
};