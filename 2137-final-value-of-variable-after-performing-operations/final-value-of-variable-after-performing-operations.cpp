class Solution {
public:
    int finalValueAfterOperations(vector<string>& op) {
        int n = op.size();
        int res=0;
        for(int i = 0 ;i<n;i++)
        {            
            if(op[i] == "X++" || op[i] == "++X") res++;
            else res--;
        }
        return res;
    }
};