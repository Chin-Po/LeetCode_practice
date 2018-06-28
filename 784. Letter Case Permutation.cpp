class Solution {
public:
    vector<string> letterCasePermutation(string S) {
        vector<string> res = {S};
        for(int i = 0; i < S.size(); i++){ // check each char in S
            if(isalpha(S[i])){ // chech if is alpha
                int size = res.size();
                for(int j = 0; j < size; j++){
                    string tmp = res[j]; // spawn two string by res[j]
                    
                    tmp[i] = tolower(tmp[i]);
                    res.push_back(tmp);
                    tmp[i] = toupper(tmp[i]);
                    res.push_back(tmp);
                }
            }
        } 
        sort(res.begin(), res.end());
        auto iter = unique(res.begin(), res.end());
        res.erase(iter, res.end());
       
        return res;
    }
};