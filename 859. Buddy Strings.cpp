class Solution {
public:
    bool buddyStrings(string A, string B) {
        // length is not the same, return false
        if(A.size() != B.size()) return false;
        
        // if A == B, need to chech if there is repeated char, if yes then return true;
        if(A == B && set<char>(A.begin(), A.end()).size() < A.size()) return true;
        
        // if A != B, there is only two diff
        vector<int> diff;
        for(int i = 0; i < A.size(); i++){
            if(A[i] != B[i]) diff.push_back(i);
        }
        if(diff.size() == 2 && A[diff[0]] == B[diff[1]] && A[diff[1]] == B[diff[0]]) return true;
        
        // other case are all false
        return false;
    }
};