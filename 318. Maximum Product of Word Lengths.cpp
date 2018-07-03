class Solution {
public:
    int maxProduct(vector<string>& words) {
        int res = 0;
        if(words.size() < 2) return res;
        for(int i = 0; i < words.size()-1; i++){ // the first string
            unordered_map<char, int> m; // char, occurence
            for(int j = 0; j < words[i].size(); j++) m[words[i][j]]++;

            for(int k = i+1; k < words.size(); k++){ // the second string
                bool isRepeated = 0;
                for(int l = 0; l < words[k].size(); l++){
                    if(m[words[k][l]] != 0) {isRepeated = 1; break;}
                }
                if(!isRepeated){
                    int mul = words[i].size() * words[k].size();
                    res = max(res, mul);
                }
            }
        }
        return res;
    }
};