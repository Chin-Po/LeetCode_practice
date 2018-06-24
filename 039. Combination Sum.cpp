class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> out;
        int start = 0;
        dfs(res, out, candidates, target, start);
        return res;
    }
    
    void dfs(vector<vector<int>>& res, vector<int>& out, vector<int>& candidates, int target, int start){
        if(target < 0) return;
        else if(target == 0) res.push_back(out);
        else{
            for(int i = start; i < candidates.size(); i++){
                out.push_back(candidates[i]);
                dfs(res, out, candidates, target - candidates[i], i);
                out.pop_back();
            }
        }
    }
};