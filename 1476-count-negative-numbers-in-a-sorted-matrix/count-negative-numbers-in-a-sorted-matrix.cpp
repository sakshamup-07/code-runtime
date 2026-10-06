class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n = grid.size();
        int cnt =0;
        for(int i =0;i<n;i++)
        {
            int k = grid[i].size();
            for(int j =0;j<k;j++)
            {
                if(grid[i][j]<0) cnt++;
            }
        }
        return cnt;
    }
};