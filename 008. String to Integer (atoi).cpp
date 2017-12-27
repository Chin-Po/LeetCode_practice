class Solution {
public:
    int myAtoi(string str) {
        long sum = 0;
        int idx = 0;
	    while (str[idx] == ' ') idx++;
	    str = str.substr(idx, str.size() - idx);
        
        int sign = 1;
        int start = 0;
        if(str[0] == '-') {
            sign = -1;
            start++;
        }
        if(str[0] == '+') {
            sign = 1;
            start++;
        }
        for(int i = start; i < str.size(); i++){
            if(isdigit(str[i]))
                sum = sum * 10 + (str[i] - '0');
            else return sign * sum;
            
            if(sign == 1 && sum >= INT_MAX) return INT_MAX;
            if(sign == -1 && -1 * sum <= INT_MIN) return INT_MIN;
        }
        return sign * sum;
    }
};