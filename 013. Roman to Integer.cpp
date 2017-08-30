class Solution {
public:
    int trans(char& c)
    {
        if(c=='I') return 1;
        if(c=='V') return 5;
        if(c=='X') return 10;
        if(c=='L') return 50;
        if(c=='C') return 100;
        if(c=='D') return 500;
        if(c=='M') return 1000;
    }
    int romanToInt(string s) {
        int result = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(i > 0 && trans(s[i]) > trans(s[i-1])) 
                result = result + (trans(s[i]) - 2*trans(s[i-1]));
            else 
                result = result + trans(s[i]);
        }
        return result;
    }

};