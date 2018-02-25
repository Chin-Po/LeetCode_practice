class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int row = obstacleGrid.size();
        int col = obstacleGrid[0].size();
        if(row == 0 || col == 0 || obstacleGrid[0][0] == 1) return 0;
        vector<vector<int>> grid(row, vector<int>(col));
        
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(i == 0 && j == 0) grid[i][j] = 1;
                else if(obstacleGrid[i][j] == 1) grid[i][j] = 0;
                else if(i == 0 && j != 0) grid[i][j] = grid[0][j-1];
                else if(i != 0 && j == 0) grid[i][j] = grid[i-1][j];
                else grid[i][j] = grid[i-1][j] + grid[i][j-1];
            }
        }
        return grid.back().back();
    }
};