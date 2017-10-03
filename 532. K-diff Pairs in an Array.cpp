class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if(nums.size() <= 1) return 0;
        vector<pair<int, int>> res;
        pair<int, int> p;
        for(int i = 0; i < nums.size() - 1; i++){
            for(int j = i + 1; j < nums.size(); j++){
                if(abs(nums[i]-nums[j]) == k){
                    if(nums[i] > nums[j]) p = {nums[i], nums[j]};
                    else p = {nums[j], nums[i]};
                    res.push_back(p);
                }
            }
        }
        sort(res.begin(), res.end(), [](pair<int, int> &p1, pair<int, int> &p2)
             ->bool{return p1.first > p2.first || (p1.first == p2.first && p1.second >= p2.second);});
        auto iter = unique(res.begin(), res.end());
        res.erase(iter, res.end());
        return res.size();
    }
};