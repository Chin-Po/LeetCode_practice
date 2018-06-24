class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> tmp;
        
        // sort the candidates
        sort(candidates.begin(), candidates.end());
        
        // use dfs to find solutions
        dfs(candidates, target, res, tmp, 0);
        
        // make unique
        sort(res.begin(), res.end());
        auto iter = unique(res.begin(), res.end());
        res.erase(iter, res.end());
        return res;
    }
    void dfs(vector<int>& candidates, int target, vector<vector<int>>& res, vector<int>& tmp, int start){
        if(target < 0) return; // too deep, go back
        else if(target == 0) res.push_back(tmp); // answer !!
        else{ // keep searching
            for(int i = start; i < candidates.size(); i++){
                tmp.push_back(candidates[i]);
                dfs(candidates, target-candidates[i], res, tmp, i+1);
                tmp.pop_back();
            }
        }
    }
};