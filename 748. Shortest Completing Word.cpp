class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        unordered_map<char, int> m; // char, occurence
        for(auto c: licensePlate) 
            if(isalpha(c)) m[tolower(c)]++;
        string res = "";
        int min_size = INT_MAX;
        for(auto s: words){ // go through each string
            unordered_map<char, int> m_tmp = m;
            for(auto c: s){
                if(m_tmp[c] != 0) m_tmp[c]--;
            }
            bool isThis = 1;
            for(auto e: m_tmp){
                if(e.second != 0) { isThis = 0; break;}
            }
            if(isThis){
                if(s.size() < min_size){
                    res = s;
                    min_size = s.size();
                }
            }
        }
        return res;      
    }
};