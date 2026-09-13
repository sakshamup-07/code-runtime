class Solution {
    static constexpr int pow[] = {0, 1, 10, 100, 1000, 10000, 100000};
public:
    int largestInteger(int n, int s) {
        if (s > n * 9) return -1;
        auto [q, r] = div(s, 9);        
        return pow[n + 1] - pow[n - q + 1] + r * pow[n - q];
    }
};