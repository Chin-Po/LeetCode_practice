class Solution {
public:
    string convertToBase7(int num) {
        if(num == 0) return "0";
        string res = "";
        bool isPositive = num > 0;
        while(num != 0){
            res = to_string(abs(num % 7)) + res;
            num /= 7;
        }
        return isPositive ? res : "-" + res;
    }
};