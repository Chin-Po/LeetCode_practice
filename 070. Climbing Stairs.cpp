class Solution {
public:
    /**
     * @param n: An integer
     * @return: An integer
     */
    int climbStairs(int n) {
        // write your code here
        vector<int> fib = {1, 2};
        if(n < 1) return 0;
        if(n == 1) return 1;
        if(n == 2) return 2;
        for(int i = 2; i < n; i++){
            int tmp = fib[i-2] + fib[i-1];
            fib.push_back(tmp);
        }
        return fib[fib.size()-1];
    }
};
