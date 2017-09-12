class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.size() != t.size()) return false;
        
        vector<char> char_s;
        vector<char> char_t;
        for(unsigned i = 0; i != s.size(); i++)
        {
            char_s.push_back(s[i]);
            char_t.push_back(t[i]);
        }
        sort(char_s.begin(), char_s.end());
        sort(char_t.begin(), char_t.end());

        for(unsigned i = 0; i != char_s.size(); i++)
        {
            if(char_s[i] != char_t[i]) return false;
        }
        return true;
    }
};