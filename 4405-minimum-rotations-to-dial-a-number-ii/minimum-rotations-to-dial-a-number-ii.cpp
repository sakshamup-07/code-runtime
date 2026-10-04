class Solution {
public:
    int rotation(int from, int to) {
        return min(abs(from - to), 10 - abs(from - to));
    }
    int minRotations(int n, string s) {
        int size = s.length();
        int mini = 0;
        int count = 0;
        count = min(abs(s[0] - '0'), 10 - abs(s[0] - '0'));
        for (int i = 1; i < size; i++) {
            count += rotation(s[i - 1], s[i]);
        }
        mini = count;
        for (int k = 0; k < n; k++) {
            int cost = count;
            if (k == 0) {
                cost = count - rotation('0', s[0]) + rotation('0', s[n - 1]);
            }
                else {
                    cost = count - rotation(s[k - 1], s[k]) +
                           rotation(s[k - 1], s[n - 1]);
                }
                mini = min(mini, cost);
            }
        
        return mini;
    }
};