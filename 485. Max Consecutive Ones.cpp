class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        if(nums.empty()) return 0;
        int max = 0, start = 0, end = 0;
        while(1)
        {
            while(nums[start] == 0) start++;
            end = start + 1;
            if(end > nums.size()) break;
            while(nums[end] == 1 && end < nums.size()) end++;
            if(max < (end - start)) max = end - start;
            start = end;
            if(end == nums.size()) break;
        }
        return max;
    }
};