class Solution {
public:
    int addDigits(int num) {
        string str_num = to_string(num);
        while(str_num.size() != 1){
            int tmp = 0;
            for(auto &i : str_num){
                tmp = tmp + (i-'0');
            }
            str_num = to_string(tmp);
        }
        return stoi(str_num);
    }
};