class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int dyna_prog = *nums.begin();
        int max = dyna_prog;
        for(unsigned i = 1; i < nums.size(); i++)
        {
            if(dyna_prog < 0)
                dyna_prog = nums[i];
            else
                dyna_prog = dyna_prog + nums[i];
            
            if(dyna_prog > max) max = dyna_prog;
        }
        return max;
    }
};