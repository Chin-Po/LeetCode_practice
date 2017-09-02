class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        for(auto iter1 = nums.begin(); iter1 != nums.end(); iter1++)
        {
            int other = target - *iter1;

            auto iter2 = find(iter1 + 1, nums.end(), other);
            if(iter2 != nums.end()) // we got it
            {
                res.push_back(distance(nums.begin(), iter1));
                res.push_back(distance(nums.begin(), iter2));
                break;
            }   
        }
        return res;
    }
};