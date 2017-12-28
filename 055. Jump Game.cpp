class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size() == 1) return true;
        int maxJump = 0;
        for(int i = 0; i < nums.size(); i++){
            maxJump--;
            if(maxJump < nums[i]) maxJump = nums[i];
            if(maxJump == 0) return false;
            if(i + nums[i] >= nums.size()-1) return true;
        }
        return false;
    }
};