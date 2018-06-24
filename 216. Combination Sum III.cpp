class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
        vector<int> tmp;
        vector<int> candidates = {1,2,3,4,5,6,7,8,9};
        dfs(k, n, res, tmp, 0, candidates);
        return res;
    }
    void dfs(int k, int n, vector<vector<int>>& res, vector<int>& tmp, int start, vector<int>& candidates){
        if(tmp.size() > k || n < 0) return;
        else if(tmp.size() == k && n == 0) res.push_back(tmp);
        else{
            for(int i = start; i < candidates.size(); i++){
                tmp.push_back(candidates[i]);
                dfs(k, n-candidates[i], res, tmp, i+1, candidates);
                tmp.pop_back();
            }
        }
    }
};