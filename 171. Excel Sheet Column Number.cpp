class Solution {
public:
    int titleToNumber(string s) {
        int num = 0;
        int power = s.size()-1;
        for(auto i : s)
        {
            num = num + (i-'A'+1)*pow(26,power);
            power--;
        }
        return num;
    }
};