class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int res = 0;
        vector<int> sums = nums;
        for(int i = 1; i < nums.size(); i++){
            sums[i] = sums[i-1] + nums[i];
        }
        for(int i = 0; i < sums.size(); i++){
            if(sums[i] == k) res++;
            for(int j = i-1; j >= 0; j--){
                if(sums[i] - sums[j] == k) res++;
            }
        }
        return res;
    }
};