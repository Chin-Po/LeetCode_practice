class Solution {
public:
    int numSquares(int n) {
        vector<int> dp(1,0);
        while(dp.size() <= n){
            int val = INT_MAX;
            for(int i = 1; i * i <= dp.size(); i++){
                val = min(val, dp[dp.size()-i*i] + 1);
            }
            dp.push_back(val);
        }
        return dp[n];
    }
};