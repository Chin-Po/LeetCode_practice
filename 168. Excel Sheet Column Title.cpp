class Solution {
public:
    string convertToTitle(int n) {
        string res = "";
        while(n){
            int tmp = (n-1) % 26;
            res = (char)('A' + tmp) + res;
            n = (n-1) / 26;
        }
        return res;
    }
};