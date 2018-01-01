class Solution {
public:
    bool judgeCircle(string moves) {
        unordered_map<char, int> m;
        for(auto c : moves) m[c]++;
        if(m['R'] == m['L'] && m['U'] == m['D']) return true;
        else return false;
    }
};