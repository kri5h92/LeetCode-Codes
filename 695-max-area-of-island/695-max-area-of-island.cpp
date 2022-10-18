class Solution {
public:
    bool seen[50][50] = {false};
    int area(vector<vector<int>>& grid, int r, int c) {
        if (r < 0 || r >= grid.size() || c < 0 || c >= grid[0].size() ||
                seen[r][c] || grid[r][c] == 0)
            return 0;
        seen[r][c] = true;
        return (1 + area(grid, r+1, c) + area(grid, r-1, c)
                  + area(grid, r, c-1) + area(grid, r, c+1));
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        // seen = new bool[m][n];
        int ans = 0;
        for(int r = 0; r < m; r++)
        {
            for(int c = 0; c < n; c++)
            {
                ans = max(ans, area(grid,r,c));
            }
        }
        return ans;
        
    }
};