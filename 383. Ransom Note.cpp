class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> usable(26,0);
        for(auto i : magazine)
        {
            usable[i-'a']++;
        }
        for(auto i : ransomNote)
        {
            usable[i-'a']--;
            if(usable[i-'a'] < 0) return false;
        }
        return true;
    }
};