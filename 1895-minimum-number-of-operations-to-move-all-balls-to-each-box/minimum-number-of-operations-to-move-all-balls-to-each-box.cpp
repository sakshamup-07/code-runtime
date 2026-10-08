class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ans;
        int n = boxes.size();
        for(int i = 0 ; i<n ; i++)
        {
                int res=0;
            for(int j =0;j<n;j++)
            {
                if(j==i) continue;
                res+= abs(i-j) * (boxes[j]-'0');
            }
           ans.emplace_back(res);
            
        }
        return ans;
    }
};