class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if(nums.empty()) return 0;
        sort(nums.begin(), nums.end());
        vector<pair<int, int>> v;
        for(int i = 0; i < nums.size()-1; i++){
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[j] - nums[i] == k) {
                    v.push_back({nums[i], nums[j]});
                    break;
                }
                else if(nums[j] - nums[i] > k) break;
            }
        }
        // it still works even without "sort"
        sort(v.begin(), v.end(), [](const pair<int, int> &p1, const pair<int, int> &p2)->bool{
            if(p1.first != p2.first) return p1.first < p2.first;
            else return p1.second < p2.second;
        });
        auto iter = unique(v.begin(), v.end());
        v.erase(iter, v.end());
        return v.size();
    }
};