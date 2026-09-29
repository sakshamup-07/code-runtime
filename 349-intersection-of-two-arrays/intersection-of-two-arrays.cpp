class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> st;
        vector<int> ans;
        for(auto it : nums1)
        {
            for(auto gt : nums2)
            {
                if(it == gt) st.insert(it);
            }
        }
     ans.assign(st.begin() , st.end());
     return ans;
    }

};