class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num <= 1) return false;
        int tmp = 1;
        for(int i = 2; i * i <= num; i++){
            if(num % i == 0) tmp = tmp + i + num / i;
            if(i * i == num) tmp = tmp - i;
        }
        return tmp == num ? true : false;
    }
};