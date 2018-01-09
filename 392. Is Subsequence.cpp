class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size() == t.size() && s != t) return false;
        auto iter_s = s.begin();
        auto iter_t = t.begin();
        while(iter_s != s.end() && iter_t != t.end()){
            if(*iter_s == *iter_t) {iter_s++; iter_t++;}
            else iter_t++;
        }
        return iter_s == s.end() ? true : false;
    }
};