class Solution {
public:
    bool detectCapitalUse(string word) {
        if(word.size() <= 1) return true;
        if(isupper(word[0])){
            if(isupper(word[1])){ // ex: USA
                for(int i = 1; i < word.size(); i++)
                    if(islower(word[i])) return false;
            }
            else{ // ex: Google
                for(int i = 1; i < word.size(); i++)
                    if(isupper(word[i])) return false;
            }
        }
        else{ // ex: leetcode
            for(int i = 1; i < word.size(); i++)
                if(isupper(word[i])) return false;
        }
        return true;
    }
};