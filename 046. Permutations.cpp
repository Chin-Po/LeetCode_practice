class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> tmp;
        vector<int> isVisited(nums.size(), 0);
        dfs(nums, res, tmp, isVisited);
        return res;
    }
    
    void dfs(vector<int>& nums, vector<vector<int>>& res, vector<int>& tmp, vector<int>& isVisited){
        if(tmp.size() == nums.size()){
            res.push_back(tmp);
            return;
        }
        else{
            for(int i = 0; i < nums.size(); i++){
                if(!isVisited[i]){
                    isVisited[i] = 1;
                    tmp.push_back(nums[i]);
                    dfs(nums, res, tmp, isVisited);
                    tmp.pop_back();
                    isVisited[i] = 0;
                }
            }
        }
        
    }
};