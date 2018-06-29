class Solution {
public:
    string customSortString(string S, string T) {
        unordered_map<char, int> m;
        for(auto c: T) m[c]++;
        string res = "";
        for(auto c: S){
            for(int i = 0; i < m[c]; i++) res += c;
            m[c] = 0;
        }
        for(auto e: m){
            for(int i = 0; i < e.second; i++)
                res += e.first;
        }
        return res;
    }
};