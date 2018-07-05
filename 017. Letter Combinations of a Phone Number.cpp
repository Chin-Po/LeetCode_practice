class Solution {
public:
    vector<string> letterCombinations(string digits) {
        unordered_map<int, string> m = {{2, "abc"}, {3, "def"}, {4, "ghi"}, 
                                        {5, "jkl"}, {6, "mno"}, {7, "pqrs"}, 
                                        {8, "tuv"}, {9, "wxyz"}};
        int level = 0;
        vector<string> res;
        if(digits.empty()) return res;
        string tmp = "";
        dfs(digits, m, level, res, tmp);
        return res;
    }
    void dfs(string& digits, unordered_map<int, string>& m, int level, vector<string>& res, string& tmp){
        if(level == digits.size()) res.push_back(tmp);
        else{
            string alpha = m[digits[level]-'0'];
            for(int i = 0; i < alpha.size(); i++){
                tmp.push_back(alpha[i]);
                dfs(digits, m, level+1, res, tmp);
                tmp.pop_back();
            }
        }
    }
};