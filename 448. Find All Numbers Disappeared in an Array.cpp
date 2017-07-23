class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> res;

        for(int i = 0; i < nums.size(); i++)
        {
            int temp = abs(nums[i])-1;
            nums[temp] = (nums[temp] > 0 ? -1*nums[temp] : nums[temp]);
        }
        
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] > 0) res.push_back(i+1);
        }
        
        return res;
    }
};