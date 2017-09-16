class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int max = -1 * INT_MAX;
        for(int i = 0; i < nums.size()-k+1; i++){
            int sum = 0;
            for(int j = i; j < i+k; j++){
                sum = sum + nums[j];
            }
            if(max < sum) max = sum;
        }
        return (double) max / k;
    }
};