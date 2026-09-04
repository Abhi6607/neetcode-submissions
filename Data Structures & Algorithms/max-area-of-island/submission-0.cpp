class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        if (grid.empty()) return 0;
        int ans = 0;
        int rows = grid.size();
        int col = grid[0].size();
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < col; j++) {
                if (grid[i][j] == 1) {
                    int area = 0;
                    dfs(grid, i, j,area);
                    ans = max(area,ans);
                }
            }
        }
        return ans;
    }
    void dfs(vector<vector<int>>& grid, int i, int j,int& area) {
        int rows = grid.size();
        int col = grid[0].size();
        if (i < 0 || i >= rows || j < 0 || j >= col || grid[i][j] == 0) {
            return;
        }
        area++;
        grid[i][j] = 0;
        dfs(grid, i + 1, j,area);
        dfs(grid, i - 1, j,area);
        dfs(grid, i, j + 1,area);
        dfs(grid, i, j - 1,area);
    }
};
