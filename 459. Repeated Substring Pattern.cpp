class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        for(int i = 1; i <= s.size()/2 ; i++){
            string s_repeated = "";
            string s_sub = s.substr(0, i);
            if(s.size() % s_sub.size() == 0){
                for(int i = 0; i < s.size()/s_sub.size(); i++) s_repeated = s_repeated + s_sub;
                if(s_repeated == s) return true;
            }
        }
        return false;
    }
};