class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();

        set<int> st;

        for(int i = 0; i < n; i++) {
            st.insert(candyType[i]);
        }

        int m = st.size();

        int answer = min(m, n / 2);

        return answer;
    }
};