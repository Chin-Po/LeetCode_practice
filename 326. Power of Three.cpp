class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n <= 0) return false;
        if(n == 1) return true;
        if(n % 10 != 3 && n % 10 != 9 && n % 10 != 7 && n % 10 != 1) return false;
        
        while(n != 1)
        {
            if(n % 3 != 0) return false;
            n = n / 3;
        }
        return true;
    }
};