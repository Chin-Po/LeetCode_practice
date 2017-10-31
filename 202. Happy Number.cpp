class Solution {
public:
    bool isHappy(int n) {
        vector<int> repeated;
        while(n != 1){
            string str_n = to_string(n);
            int tmp = 0;
            for(auto &i : str_n){
                tmp = tmp + (i - '0')*(i - '0');
            }
            auto iter = find(repeated.begin(), repeated.end(), tmp);
            if(iter != repeated.end()) return false;
            repeated.push_back(tmp);
            n = tmp;
        }
        return true;
    }
};