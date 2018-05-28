class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        if(grid.size() < 3 || grid[0].size() < 3) return 0;
        int res = 0;
        for(int i = 0; i < grid.size()-2; i++){
            for(int j = 0; j < grid[0].size()-2; j++){
                if(isMagic(i, j, grid)) res++;
            }
        }
        return res;
    }
    bool isMagic(int i, int j, vector<vector<int>>& grid){
        // sum of diagonal
        if(grid[i][j] + grid[i+1][j+1] + grid[i+2][j+2] != 15) return false;
        if(grid[i][j+2] + grid[i+1][j+1] + grid[i+2][j] != 15) return false;
        
        for(int x = i; x < i + 3; x++){ // 1 <= element <= 9 
            for(int y = j; y < j + 3; y++){
                if(grid[x][y] == 0 || grid[x][y] > 9) return false;
            }
        }
        for(int x = i; x < i + 3; x++){ // row sum = 15
            int sum_row = 0;
            for(int y = j; y < j + 3; y++){
                sum_row += grid[x][y];
            }
            if(sum_row != 15) return false;
        }
        for(int x = j; x < j+3; x++){ // col sum = 15
            int sum_col = 0;
            for(int y = i; y < i+3; y++){
                sum_col += grid[y][x];
            }
            if(sum_col != 15) return false;
        }
        return true;
    }
};