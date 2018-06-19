class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        for(int i = 0; i < row; i++){
            if(!isSame(i, 0, matrix)) return false;
        }
        for(int j = 0; j < col; j++){
            if(!isSame(0, j, matrix)) return false;
        }
        return true;
    }
    
    bool isSame(int i, int j, vector<vector<int>>& matrix){
        int idx_i = i+1;
        int idx_j = j+1;
        while(isValid(idx_i, idx_j, matrix)){
            if(matrix[idx_i][idx_j] != matrix[i][j]) return false;
            idx_i += 1;
            idx_j += 1;
        }
        return true;
    }
    
    bool isValid(int i, int j, vector<vector<int>>& matrix){
        int row = matrix.size();
        int col = matrix[0].size();
        if(0 <= i && i < row && 0 <= j && j < col) return true;
        else return false;
    }
    
};