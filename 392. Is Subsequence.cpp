class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size() == t.size() && s != t) return false;
        int idx = 0;
        for(int i = 0; i < s.size(); i++){
            while(idx < t.size()){
                if(s[i] == t[idx]){
                    idx++;
                    break;
                }
                else idx++;
            }
            if(idx == t.size() && i != s.size()-1) return false;
        }
        return true;
    }
};