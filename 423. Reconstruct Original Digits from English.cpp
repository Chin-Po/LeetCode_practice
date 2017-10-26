class Solution {
public:
    string originalDigits(string s) {
        vector<int> cnt(10, 0);
        for(auto &i : s){
            if(i == 'z') cnt[0]++; // 0
            if(i == 'w') cnt[2]++; // 2
            if(i == 'u') cnt[4]++; // 4
            if(i == 'x') cnt[6]++; // 6
            if(i == 'g') cnt[8]++; // 8
            if(i == 's') cnt[7]++; // 6, 7
            if(i == 'f') cnt[5]++; // 4, 5
            if(i == 'h') cnt[3]++; // 3, 8
            if(i == 'i') cnt[9]++; // 5, 6, 8, 9
            if(i == 'o') cnt[1]++; // 0, 1, 2, 4
        }
        cnt[7] = cnt[7] - cnt[6];
        cnt[5] = cnt[5] - cnt[4];
        cnt[3] = cnt[3] - cnt[8];
        cnt[9] = cnt[9] - cnt[5] - cnt[6] - cnt[8];
        cnt[1] = cnt[1] - cnt[0] - cnt[2] - cnt[4];
        
        string res = "";
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < cnt[i]; j++){
                res = res + to_string(i);
            }
        }
        return res;
    }
};