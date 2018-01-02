class Solution {
public:
    string findLongestWord(string s, vector<string>& d) {
        sort(d.begin(), d.end(), [](const string &s1, const string &s2)->bool{
            if(s1.size() == s2.size()) return s1 < s2;
            else return s1.size() > s2.size();
        });
        
        for(auto &str: d){
            int i = 0;
            for(auto &c: s) if(i < str.size() && c == str[i]) i++;
            if(i == str.size()) return str;
        }
        return "";
    }
};

// ref: http://www.cnblogs.com/grandyang/p/6523344.html