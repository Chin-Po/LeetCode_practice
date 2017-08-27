class Solution {
public:
    string removeKdigits(string num, int k) {
        while(1)
        {
            if(k >= num.size() || num.size() == 0) return "0";
            if(k == 0) return num;
            k--;
            
            if(num[1] == '0')
            {
                int tmp = 1;
                while(num[tmp] == '0' && tmp < num.size()) tmp++;
                num = num.substr(tmp);
            }
            else
            {
                int tmp = 0;
                while(num[tmp] <= num[tmp+1] && tmp+1 != num.size()) tmp++;
                num = num.substr(0, tmp) + num.substr(tmp+1);
            }
        }
    }
};