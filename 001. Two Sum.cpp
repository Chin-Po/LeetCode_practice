class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res; 
        vector<pair<int, int>> ori;
        for(int i = 0; i < nums.size(); i++)
            ori.push_back({nums[i], i});
        
        sort(ori.begin(), ori.end());
        int start = 0;
        int end = nums.size()-1;
        while(1){
            if(ori[start].first + ori[end].first < target) start++;
            else if(ori[start].first + ori[end].first > target) end--;
            else {
                res.push_back(ori[start].second);
                res.push_back(ori[end].second);
                return res;
            }
        }
    }
};