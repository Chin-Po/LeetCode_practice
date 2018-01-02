class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        queue<pair<int, int>> q;
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(matrix[i][j] == 0) q.push({i, j});
                else matrix[i][j] = INT_MAX;
            }
        }
        vector<pair<int, int>> surrounds = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
        while(!q.empty()){
            auto p = q.front(); q.pop();
            for(auto &surround: surrounds){
                int new_x = p.first + surround.first;
                int new_y = p.second + surround.second;
                if(new_x < 0 || new_x >= row || new_y < 0 || new_y >= col ||
                  matrix[new_x][new_y] <= matrix[p.first][p.second]) continue;
                matrix[new_x][new_y] = matrix[p.first][p.second] + 1;
                q.push({new_x, new_y});
            }
        }
        return matrix;
    }
};