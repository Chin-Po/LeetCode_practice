class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        unordered_map<int, int> m; // coin, occurence
        for(int i = 0; i < bills.size(); i++){
            if(bills[i] == 5) m[5]++;
            else if(bills[i] == 10){
                m[10]++;
                m[5]--;
                if(m[5] < 0) return false;
            }
            else if(bills[i] == 20){
                if(m[10] >= 1 && m[5] >= 1){m[10]--; m[5]--;}
                else if(m[5] >= 3) m[5] -= 3;
                else return false;
                m[20]++;
            }
        }
        return true;
    }
};