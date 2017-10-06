class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> res;
        if(s.size() <= 10) return res;
        unordered_map<string, int> m;
        for(int i = 0; i < s.size()-9; i++){
            string sub_str = s.substr(i, 10);
            ++m[sub_str];
        }
        
        for(auto iter = m.begin(); iter != m.end(); iter++){
            if(iter->second >= 2) res.push_back(iter->first);
        }
        return res;
    }
};