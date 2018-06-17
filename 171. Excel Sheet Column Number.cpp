class Solution {
public:
    int titleToNumber(string s) {
        int num = 0;
        int power = 0;
        for(auto iter = s.rbegin(); iter != s.rend(); iter++){
            int tmp = (*iter - 'A' + 1) * pow(26, power);
            num += tmp;
            power++;
        }
        return num;
    }
};