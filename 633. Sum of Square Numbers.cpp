class Solution {
public:
    bool judgeSquareSum(int c) {
        int range = sqrt(c);
        for(int i = 0; i <= range; i++)
        {
            int tmp = c - i*i;
            if(is_square(tmp)) return true;
        }
        return false;
    }
    bool is_square(int num)
    {
        int tmp = sqrt(num);
        if(tmp * tmp == num) return true;
        else return false;
    }
};