class Solution {
public:
    string complexNumberMultiply(string a, string b) {
        int idx_a_plus = find(a.begin(), a.end(), '+') - a.begin();
        int idx_a_i = a.size()-1;
        int a_real = stoi(a.substr(0, idx_a_plus));
        int a_img = stoi(a.substr(idx_a_plus + 1, idx_a_i - idx_a_plus - 1));
        
        int idx_b_plus = find(b.begin(), b.end(), '+') - b.begin();
        int idx_b_i = b.size() - 1;
        int b_real = stoi(b.substr(0, idx_b_plus));
        int b_img = stoi(b.substr(idx_b_plus+1, idx_b_i-idx_b_plus-1));
        
        int res_real = a_real * b_real - a_img * b_img;
        int res_img = a_real * b_img + a_img * b_real;
        string res = to_string(res_real) + "+" + to_string(res_img) + "i";
        return res;
    }
};