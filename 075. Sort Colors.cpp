class Solution {
public:
    void sortColors(vector<int>& nums) {
        int head = 0;
        int end = nums.size()-1;
        for(int i = 0; i < nums.size(); i++){
            while(nums[head] == 0) head++;
            while(nums[end] == 2) end--;
            if(i < end && nums[i] == 2) swap(nums[i], nums[end]);
            if(i > head && nums[i] == 0) swap(nums[i], nums[head]);  
        }
    }
};