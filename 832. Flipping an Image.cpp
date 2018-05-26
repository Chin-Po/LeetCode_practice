class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for(int i = 0; i < A.size(); i++){
            for(int j = 0; j < A[i].size(); j++){ // invert
                if(A[i][j] == 0) A[i][j] = 1;
                else A[i][j] = 0;
            }
            reverse(A[i].begin(), A[i].end()); // reverse
        }
        return A;
    }
};