class Solution {
public:
    /*
     * @param nums: Given an integers array A
     * @return: A long long array B and B[i]= A[0] * ... * A[i-1] * A[i+1] * ... * A[n-1]
     */
    vector<long long> productExcludeItself(vector<int> &nums) {
        // write your code here
        vector<long long> fwd(nums.size(), 1);
        vector<long long> bwd(nums.size(), 1);
        vector<long long> res(nums.size(), 0);
        
        for(int i = 1; i < nums.size(); i++){
            fwd[i] = fwd[i-1] * nums[i-1];
        }
        for(int i = nums.size()-2; i >= 0; i--){
            bwd[i] = bwd[i+1] * nums[i+1];
        }
        for(int i = 0; i < nums.size(); i++){
            res[i] = fwd[i] * bwd[i];
        }
        return res;
    }
};