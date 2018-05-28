class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        string res;
        int max_num = 0;
        unordered_map<string, int> m;
        string str;
        istringstream iss(paragraph);
        while(iss >> str){
            string str_alph;
            for(auto &c: str){
                if(isalpha(c)) str_alph += tolower(c);
            }
            auto iter = find(banned.begin(), banned.end(), str_alph);
            if(iter == banned.end()){
                m[str_alph]++;
                if(m[str_alph] > max_num) {
                    res = str_alph;
                    max_num = m[str_alph];
                }
            }
        }
        return res;
    }
};