class Solution {
public:
    bool isPowerOfFour(int num) {
        if(num <= 0) return false;
        while(num % 4 == 0) num = num / 4;
        return num == 1 ? true : false;
    }
};

// follow up : without loop
/*
1: 1
10: 2
100: 4
1000: 8
10000: 16
100000: 32
1000000: 64
由上規律可以看出：4的次方數1都會出現在奇數的位置上
所以把n和01010101...0101 AND起來, 是true而且是2的次方數的話,就是4的次方
另外,2的次方數是由n, n-1 AND來判斷
class Solution {
public:
    bool isPowerOfFour(int num) {
        return (num > 0) && (num & (num-1)) == 0 && (num & 0x55555555) != 0; 
    }
};
*/