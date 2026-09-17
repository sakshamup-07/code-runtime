auto speedup = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        priority_queue<pair<int, int>> pq;
        for (auto& h : nums) {
            mpp[h]++;
        }
        for (auto& j : mpp) {
            pq.push({j.second, j.first});
        }
        vector<int> temp;

        for (int i = 0; i < k; i++)
            if (!pq.empty()) {
                {
                    temp.emplace_back(pq.top().second);
                    pq.pop();
                }
            }
        return temp;
    }
};