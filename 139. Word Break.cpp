class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int len = s.size();
        vector<bool> vec(len+1, false);
        vec[0] = true;
        for(int i = 1; i < len + 1; i++){
            for(int j = 0; j < i; j++){
                if(vec[j] && find(wordDict.begin(), wordDict.end(), s.substr(j, i - j)) != wordDict.end()){
                    vec[i] = true;
                    break;
                }
            }
        }
        return vec.back();
    }
};

// ref: http://www.cnblogs.com/grandyang/p/4257740.html