class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        sort(trips.begin(), trips.end(),
             [](const vector<int>& a, const vector<int>& b) {
                 return a[1] < b[1];
             });
        int n = trips.size();
        int counter = 0;
        priority_queue<pair<int, int>, vector<pair<int, int>>,
                       greater<pair<int, int>>>
            pq;
    
        for (auto& h : trips) {
            while (!pq.empty() && pq.top().first <= h[1])
            {
                counter -= pq.top().second;
                pq.pop();
            }
            counter += h[0];
            if(counter>capacity) return false;
            pq.push({h[2] , h[0]});
        }
        return true ;
    }
};