class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty()) return 0;
        if(needle.size() > haystack.size()) return -1;
        
        for(int i = 0; i <= haystack.size() - needle.size(); i++)
        {
            string str = haystack.substr(i, needle.size());
            if(str == needle) return i;
        }
        return -1;
    }
};