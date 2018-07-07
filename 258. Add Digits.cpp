class Solution {
public:
    int addDigits(int num) {
        if(num % 10 == num) return num;
        while(1){
            string str_n = to_string(num);
            int res = 0;
            for(auto c: str_n) res += (c - '0');
            if(res % 10 == res) return res;
            else num = res;
        }
    }
};