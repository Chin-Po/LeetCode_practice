class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) return {};
        int row = matrix.size();
        int col = matrix[0].size();
        vector<int> res(row * col);
        
        int r = 0;
        int c = 0;
        
        for(int i = 0; i < row * col; i++)
        {
            res[i] = matrix[r][c];
            if((r + c) % 2 == 0) // even
            {
                if(c == col-1) r++;
                else if(r == 0) c++;
                else {r--; c++;}
            }
            else // odd
            {
                if(r == row-1) c++;
                else if(c == 0) r++;
                else {c--; r++;}
            }
        }
        return res;
    }
};