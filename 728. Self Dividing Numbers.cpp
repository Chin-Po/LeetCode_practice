class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        for(int i = left; i <= right; i++){
            if(isSelfDivided(i)) res.push_back(i);
        }
        return res;
    }
    
    bool isSelfDivided(int num){
        string i_str = to_string(num);
        for(int i = 0; i < i_str.size(); i++){
            int digit = i_str[i]-'0';
            if(digit == 0) return false;
            else if(num % digit != 0) return false;
        }
        return true;
    }
};