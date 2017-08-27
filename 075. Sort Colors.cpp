class Solution {
public:
    void sortColors(vector<int>& nums) {
        int head = 0;
        int end = nums.size()-1;
        
        for(unsigned i = 0; i < nums.size(); i++)
        {
            while(nums[head] == 0 && head != end) head++;
            while(nums[end] == 2 && head != end) end--;
            
            if(nums[i] == 2 && end > i)
            {
                swap(nums[i], nums[end]);
                end--;
            }
            if(nums[i] == 0 && head < i)
            {
                swap(nums[i], nums[head]);
                head++;
            }
        }
    }
};