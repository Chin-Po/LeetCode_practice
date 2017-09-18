class Solution {
public:
    bool checkRecord(string s) {
        int cnt_A = 0;
        int cnt_L = 0;
        
        int idx = 0;
        while(idx != s.size()){
            if(s[idx] == 'A') {
                cnt_A++;
                if(cnt_A > 1) return false;
            }
            if(s[idx] == 'L'){
                if(idx+1 != s.size() && s[idx+1] == 'L')
                    if(idx+2 != s.size() && s[idx+2] == 'L')
                        return false;
            }
            idx++;
        }
        return true;
    }
};