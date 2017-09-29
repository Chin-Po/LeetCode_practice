class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n == 0) return 1;
        if(n == 1) return 10;
        if(n > 10) n = 10;
        
        int res = 10;
        
        for(int i = 2; i <= n; i++){
            int tmp = 9;
            for(int j = 1; j < i; j++){
                tmp = tmp * (10-j);
            }
            res = res + tmp;
        }
        return res;
    }
};