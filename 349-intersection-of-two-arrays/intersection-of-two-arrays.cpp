class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();

        vector<int> result;

        unordered_map<int, int> mp1;
        unordered_map<int, int> mp2;

        for(auto it : nums1) {
            mp1[it]++;
        }

        for(auto it : nums2) {
            mp2[it]++;
        }

        for(auto it : mp1) {
            if(mp2.find(it.first) != mp2.end()) {
                result.push_back(it.first);
            }
        }

        return result;
    }
};