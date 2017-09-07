class Solution {
public:
    // this is the Newton Iterative Method @@, AMAZING
    int mySqrt(int x) {
        if(x == 0) return 0;
        double res = 1;
        double last = 0;
        while(res != last)
        {
            last = res;
            res = (res + x / res) / 2;
        }
        return int(res);
    }
};