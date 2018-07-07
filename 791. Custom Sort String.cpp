class Solution {
public:
    string customSortString(string S, string T) {
        unordered_map<char, int> m; // char, occurency 
        for(auto c: T) m[c]++;
        string res = "";
        for(auto c: S){
            while(m[c] != 0){
                res += c;
                m[c]--;
            }
        }
        for(auto e: m){
            while(e.second != 0){
                res += e.first;
                e.second--;
            }
        }
        return res;
    }
};