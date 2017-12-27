class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        if(nums.size() < 4) return res;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size()-3; i++){
            for(int j = i + 1; j < nums.size()-2; j++){
                int front = j + 1;
                int end = nums.size()-1;
                int sub_target = target - nums[i] - nums[j];
                while(front < end){
                    if(nums[front] + nums[end] < sub_target) front++;
                    else if(nums[front] + nums[end] > sub_target) end--;
                    else{ // Equal!!
                        vector<int> set = {nums[i], nums[j], nums[front], nums[end]};
                        res.push_back(set);
                        front++;
                        end--;
                    }
                }
            }
        }
        sort(res.begin(), res.end());
        auto iter = unique(res.begin(), res.end());
        res.erase(iter, res.end());
        return res;
    }
};
