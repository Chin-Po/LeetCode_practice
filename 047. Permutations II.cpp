class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        // sort the nums array
        sort(nums.begin(), nums.end());
        
        // initialize the essential data structure
        vector<vector<int>> res;
        vector<int> tmp;
        vector<int> isVisited(nums.size(), 0);
        
        // execute the dfs function
        dfs(nums, res, tmp, isVisited);
        
        // unique the res matrix
        sort(res.begin(), res.end());
        auto iter = unique(res.begin(), res.end());
        res.erase(iter, res.end());
        return res;
    }
    void dfs(vector<int>& nums, vector<vector<int>>& res, vector<int>& tmp, vector<int>& isVisited){
        // termination condition
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