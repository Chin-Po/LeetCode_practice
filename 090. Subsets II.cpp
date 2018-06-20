class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        vector<int> tmp;
        res.push_back(tmp);
        findSubset(nums, res, tmp, 0);
        sort(res.begin(), res.end());
        auto iter = unique(res.begin(), res.end());
        res.erase(iter, res.end());
        return res;
    }
    void findSubset(vector<int>& nums, vector<vector<int>>& res, vector<int>& tmp, int start){
        for(int i = start; i < nums.size(); i++){
            tmp.push_back(nums[i]);
            res.push_back(tmp);
            findSubset(nums, res, tmp, i+1);
            tmp.pop_back();
        }
    }
};