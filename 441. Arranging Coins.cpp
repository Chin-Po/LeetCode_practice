class Solution {
public:
    int arrangeCoins(int n) {
        // since n = x(1+x)/2 ==> x = ...
        int x = ( -1 + sqrt ( 8 * (long)n + 1 ) ) / 2;
        return x;
    }
};