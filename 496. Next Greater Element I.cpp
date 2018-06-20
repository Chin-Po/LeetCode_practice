class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        unordered_map<int, int> m; // <num, next_greater>
        for(int i = 0; i < nums.size(); i++){
            bool isGreater = 0;
            for(int j = i+1; j < nums.size(); j++){
                if(nums[i] < nums[j]) {
                    m[nums[i]] = nums[j];
                    isGreater = 1;
                    break;
                }
            }
            if(!isGreater) m[nums[i]] = -1;
        }
        for(auto &i : findNums) i = m[i];
        
        return findNums;
    }
};