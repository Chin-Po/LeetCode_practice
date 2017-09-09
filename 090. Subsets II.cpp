class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> allSet;
        vector<int> sol;
        allSet.push_back(sol);
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < nums.size(); i++)
        {
            int n = allSet.size();
            for(int j = 0; j < n; j++)
            {
                sol = allSet[j];
                sol.push_back(nums[i]);
                allSet.push_back(sol);
            }
        }
        sort(allSet.begin(), allSet.end());
        auto iter = unique(allSet.begin(), allSet.end());
        allSet.erase(iter, allSet.end());
        
        return allSet;
    }
};