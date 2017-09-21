class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        map<char, int> m;
        for(unsigned i = 0; i < 9; i++){ // chech for each row
            for(unsigned j = 0; j < 9; j++){
                if(board[i][j] != '.'){
                    ++m[board[i][j]];
                    if(m[board[i][j]] >= 2) return false;
                }
            }
            m.clear();
        }
        
        
        for(unsigned i = 0; i < 9; i++){ // check for each col
            for(unsigned j = 0; j < 9; j++){
                if(board[j][i] != '.'){
                    ++m[board[j][i]];
                    if(m[board[j][i]] >= 2) return false;
                }
            }
            m.clear();
        }

        for(int idx_row = 0; idx_row < 3; idx_row++){
            for(int idx_col = 0; idx_col < 3; idx_col++){
                for(int i = idx_row*3; i < idx_row*3+3; i++){
                    for(int j = idx_col*3; j < idx_col*3+3; j++){
                        if(board[i][j] != '.'){
                            ++m[board[i][j]];
                            if(m[board[i][j]] >= 2) return false;
                        }
                    }  
                }
                m.clear();
            }
        }
        return true;
    }
};