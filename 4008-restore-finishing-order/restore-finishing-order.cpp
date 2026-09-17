class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        int m = order.size();
        int n = friends.size();
        vector<int> ans;
        unordered_map<int , int> mpp;
        for(auto &s : friends)
        {
          mpp[s]++;
        }
        for(auto &k : order)
        {
            if(mpp.find(k) != mpp.end())
            {
                ans.emplace_back(k);
            }
        }
        return ans;
    }
};