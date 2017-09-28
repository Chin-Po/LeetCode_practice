class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int idx = 0;
        while(idx < nums.size()){
            if(nums[idx] != idx + 1 && nums[nums[idx] - 1] != nums[idx] 
               && nums[idx] >= 1 && nums[idx] <= nums.size()){
                swap(nums[idx], nums[nums[idx]-1]);
            }
            else idx++;
        }
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != i+1) return i + 1;
        }
        return nums.size() + 1;
    }
};