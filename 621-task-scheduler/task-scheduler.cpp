class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        map<char, int> mpp;
        priority_queue<int> pq;
        int k = tasks.size();
        int time = 0;
        for (int i = 0; i < k; i++) {
            mpp[tasks[i]]++;
        }
        for (auto it : mpp) {
            pq.push(it.second);
        }
        while (!pq.empty()) {
            vector<int> temp;

            for (int i = 1; i <= n + 1; i++) {
                if (!pq.empty()) {
                    int freq = pq.top();
                    pq.pop();
                    freq--;
                    temp.emplace_back(freq);
                }
            }

            for (int i = 0; i < temp.size(); i++) {
                if (temp[i] > 0) {
                    pq.push(temp[i]);
                }
            }
            if (pq.empty()) {
                time += temp.size();
            } else
                time += n + 1;
        }
        return time;
    }
};