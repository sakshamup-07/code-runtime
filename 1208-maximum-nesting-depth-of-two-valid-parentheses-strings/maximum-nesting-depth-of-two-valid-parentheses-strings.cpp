class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int n = seq.length();
        int mxd=0;
        vector<int> ans;
        for(auto it : seq)
        {
            if(it =='(')
            {
                mxd++;
                ans.push_back(mxd%2);
            }
            else
            {
                ans.push_back(mxd%2);
                mxd--;
            }
        }
            return ans;
    }
};