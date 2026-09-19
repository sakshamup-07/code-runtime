class Solution {
public:
    bool isHappy(int n) {
        int sum = 0;
        unordered_set <int> st;
        while (n > 0) {
            int ld = n % 10;
            n = n / 10;
            sum += ld * ld;
            if (n == 0) {
                if (sum == 1)
                    return true;
                if (st.count(sum))
                    return false;
                else {
                    st.insert(sum);
                    n = sum;
                    sum = 0;
                }
            }
        }
        return false;
    }
};