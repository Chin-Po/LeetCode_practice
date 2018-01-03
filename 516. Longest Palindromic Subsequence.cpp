class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int n = s.size();
        vector<vector<int>> dp(n, vector<int>(n));
        for(int i = n - 1; i >= 0; i--){
            dp[i][i] = 1;
            for(int j = i + 1; j < n; j++){
                if(s[i] == s[j]) dp[i][j] = dp[i+1][j-1] + 2;
                else dp[i][j] = max(dp[i+1][j], dp[i][j-1]);
            }
        }
    }
    return dp[0][n-1];
};

// ref: http://www.cnblogs.com/grandyang/p/6493182.html

/*
the dp of ""bbbab" is:
1 2 3 3 4
0 1 2 2 3
0 0 1 1 3
0 0 0 1 1
0 0 0 0 1
*/