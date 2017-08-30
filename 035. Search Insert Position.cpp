class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(nums.empty()) return 0;
        
        auto iter = find(nums.begin(), nums.end(), target);
        if(iter != nums.end()) return distance(nums.begin(),iter);
        else
        {
            if(target < *(nums.begin())) return 0;
            else if (target > *(nums.end()-1)) return nums.size();
            else
            {
                for(unsigned i = 0; i < nums.size()-1; i++)
                {
                    if(target > nums[i] && target < nums[i+1])
                        return i+1;
                }
            }
        }
        
    }
};