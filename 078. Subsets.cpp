class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector< vector<int> > allSet;
        vector<int> sol;
        allSet.push_back(sol);
        sort(nums.begin(), nums.end());
        findSubset(nums, 0, sol, allSet);
        return allSet;
    }
    void findSubset(vector<int>& nums, int start, vector<int> &sol, vector<vector<int>> &allSet)
    {
        for(int i = start; i < nums.size(); i++)
        {
            sol.push_back(nums[i]);
            allSet.push_back(sol);
            findSubset(nums, i+1, sol, allSet);
            sol.pop_back();
        }
    }
};