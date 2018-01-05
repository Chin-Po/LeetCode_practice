class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        vector<vector<string>> res;
        if(strs.empty()) return res;
        for(auto &str: strs){
            string tmp = str;
            sort(tmp.begin(), tmp.end());
            m[tmp].push_back(str);
        }
        for(auto &i : m) res.push_back(i.second);
        return res;
    }
};