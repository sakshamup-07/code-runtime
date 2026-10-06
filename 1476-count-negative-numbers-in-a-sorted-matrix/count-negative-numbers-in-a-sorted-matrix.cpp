class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n = grid.size();
        int trows=0;
        int cnt =0;
        for(auto it : grid)
        {
          trows += it.size();
        }
        int r =0;
        int c=0;
        for(int i =0;i < trows ; i++)
        {
         if(grid[r][c] <0) cnt++;
         c++;
         if(c>=grid[r].size())
         {
            c=0;
            r++;
         }
        }
        return cnt;
    } 
};