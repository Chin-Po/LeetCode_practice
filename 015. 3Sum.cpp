class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        if(nums.size() < 3) return res;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size()-2; i++){
            int left = i + 1;
            int right = nums.size()-1;
            int sub_target = -1 * nums[i];
            while(left < right){
                if(nums[left] + nums[right] < sub_target) left++;
                else if(nums[left] + nums[right] > sub_target) right--;
                else{
                    vector<int> set = {nums[i], nums[left], nums[right]};
                    res.push_back(set);
                    while(left < right && nums[left] == set[1]) left++;
                    while(left < right && nums[right] == set[2]) right--;
                }
            }
        }
        sort(res.begin(), res.end());
        auto iter = unique(res.begin(), res.end());
        res.erase(iter, res.end());
        return res;
    }
};