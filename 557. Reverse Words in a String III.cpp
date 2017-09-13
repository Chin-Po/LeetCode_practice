class Solution {
public:
    string reverseWords(string s) {
        istringstream iss(s);
        string word;
        vector<string> vec_s;
        while(iss >> word) vec_s.push_back(word);
        for(auto &s : vec_s)
        {
            string tmp = "";
            for(auto iter = s.rbegin(); iter != s.rend(); iter++) tmp = tmp + *iter;
            s = tmp;
        }
        string res = "";
        for(auto iter = vec_s.begin(); iter != vec_s.end(); iter++)
            res = res + *iter + (iter != vec_s.end()-1 ? " " : "");
        return res;
    }
};