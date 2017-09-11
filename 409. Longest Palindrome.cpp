class Solution {
public:
    int longestPalindrome(string s) {
        map<char, int> m;
        int res = 0;
        for(auto &i : s) ++m[i];
        
        bool isOne = 0;
        for(auto &i : m){
            if(i.second % 2 == 0) res = res + i.second;
            else{
                res = res + (i.second-1);
                isOne = 1;
            }
        }
        return res + (isOne ? 1 : 0);
    }
};