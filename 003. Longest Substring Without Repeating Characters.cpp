class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> setChar;
        int left = 0, right = 0, res = 0;
        while(right < s.size()){
            if(setChar.find(s[right]) == setChar.end()){ // new element
                setChar.insert(s[right]);
                res = max(res, (int) setChar.size());
                right++;
            }
            else{ // existed element
                setChar.erase(s[left]);
                left++;
            }
        }
        return res;
    }
};