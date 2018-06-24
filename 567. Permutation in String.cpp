// method 1
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        // exception
        if(s1.size() > s2.size()) return false;
        
        // the first "s1.size()" occurence
        vector<int> m1(26, 0); // <char, occurence>
        vector<int> m2(26, 0); // <char, occurence>
        for(int i = 0; i < s1.size(); i++){
            m1[s1[i]-'a']++;
            m2[s2[i]-'a']++;
        }
        if(m1 == m2) return true;
        
        // the others
        for(int i = s1.size(); i < s2.size(); i++){
            int left = i - s1.size();
            m2[s2[left]-'a']--;
            m2[s2[i]-'a']++;
            if(m1 == m2) return true;
        }
        return false;
    }
};




// method 2
// class Solution {
// public:
//     bool checkInclusion(string s1, string s2) {
//         // exception
//         if(s1.size() > s2.size()) return false;
        
//         // get all the permutation of s1
//         vector<string> permutation_s1;
//         vector<char> tmp;
//         vector<int> isVisited(s1.size(), 0);
//         dfs(s1, permutation_s1, tmp, isVisited);
        
//         // match the permutation of s1 with the substring of s2
//         for(auto str: permutation_s1){
//             for(int i = 0; i <= s2.size()-s1.size(); i++){
//                 string subs = s2.substr(i, s1.size());
//                 if(subs == str) return true;
//             }
//         }
//         return false;
//     }
    
//     void dfs(string& s1, vector<string>& permutation_s1, vector<char>& tmp, vector<int>& isVisited){
//         if(tmp.size() == s1.size()){
//             string str = "";
//             for(auto c: tmp) str += c;
//             permutation_s1.push_back(str);
//             return;
//         }
//         else{
//             for(int i = 0; i < s1.size(); i++){
//                 if(!isVisited[i]){
//                     isVisited[i] = 1;
//                     tmp.push_back(s1[i]);
//                     dfs(s1, permutation_s1, tmp, isVisited);
//                     tmp.pop_back();
//                     isVisited[i] = 0;
//                 }
//             }
//         }
        
//     }
// };



