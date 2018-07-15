class Solution {
public:
    string fractionAddition(string expression) {
        istringstream iss(expression);
        int res_num = 0;
        int res_den = 1;
        int input_num;
        int input_den;
        char c;
        while(iss >> input_num >> c >> input_den){
            res_num = res_num * input_den + input_num * res_den;
            res_den = res_den * input_den;
            int g = abs(gcd(res_num, res_den));
            res_num /= g;
            res_den /= g;
        }
        return to_string(res_num) + "/" + to_string(res_den);
    }
    int gcd(int a, int b){
        if(b == 0) return a;
        else return gcd(b, a % b);
    }
};