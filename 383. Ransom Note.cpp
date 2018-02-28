class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<int, int> m;
        for(auto c: magazine) m[c]++;
        for(auto c: ransomNote){
            m[c]--;
            if(m[c] < 0) return false;
        }
        return true;
    }
};

// method 2
// class Solution {
// public:
//     bool canConstruct(string ransomNote, string magazine) {
//         vector<int> usable(26,0);
//         for(auto i : magazine){
//             usable[i-'a']++;
//         }
//         for(auto i : ransomNote){
//             usable[i-'a']--;
//             if(usable[i-'a'] < 0) return false;
//         }
//         return true;
//     }
// };


