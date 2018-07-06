class Solution {
public:
    string multiply(string num1, string num2) {
        vector<int> res(num1.size() + num2.size(), 0);
        int k = num1.size() + num2.size() - 2;
        int carry = 0;
        for(int i = 0; i < num1.size(); i++){
            for(int j = 0; j < num2.size(); j++){
                res[k - i - j] += (num1[i] - '0') * (num2[j] - '0');
            }
        }
        for(int i = 0; i < num1.size() + num2.size(); i++){
            res[i] += carry;
            carry = res[i] / 10;
            res[i] = res[i] % 10;
        }
        int i = num1.size() + num2.size() - 1;
        while(res[i] == 0) i--;
        if(i < 0) return "0";
        string str = "";
        while(i >= 0) {str.push_back(res[i] + '0'); i--;}
        return str;
    }
};