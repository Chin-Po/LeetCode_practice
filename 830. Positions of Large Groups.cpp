class Solution {
public:
    vector<vector<int>> largeGroupPositions(string S) {
        int head = 0;
        int end = 0;
        vector<vector<int>>a res;
        if(S.size() < 3) return res;
        while(head < S.size()){
            while(S[end] == S[head]){
                end++;
                if(end == S.size()) break;
            } 
            if(end - head >= 3) res.push_back({head, end-1});
            head = end;
        }
        return res;
    }
};