class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> res = nums;
        for(int i = 0; i < nums.size(); i++){
            bool isGreater = 0;
            int idx = (i+1) % nums.size();
            while(i != idx){
                if(nums[i] < nums[idx]){
                    res[i] = nums[idx];
                    isGreater = 1;
                    break;
                }
                idx = (idx + 1) % nums.size();
            }
            if(!isGreater) res[i] = -1;
        } 
        return res;
    }
};