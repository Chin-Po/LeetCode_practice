class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        getParDFS(n, n, "", res);
        return res;
    }
    void getParDFS(int left, int right, string str, vector<string>& res){
        if(left > right) return;
        else if(left == 0 && right == 0) res.push_back(str);
        else{
            if(left > 0) getParDFS(left-1, right, str+"(", res);
            if(right > 0) getParDFS(left, right-1, str+")", res);
        }
    }
};