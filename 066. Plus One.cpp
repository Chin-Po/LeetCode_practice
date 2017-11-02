class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        bool isUp = 1;
        int idx = digits.size()-1;
        while(idx >= 0){
            if(isUp == 1) digits[idx]++;
            
            if(digits[idx] == 10){
                digits[idx] = 0;
                idx--;
            }
            else return digits;
        }
        if(isUp) digits.insert(digits.begin(), 1);
        return digits;
    }
};