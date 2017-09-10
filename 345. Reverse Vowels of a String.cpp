class Solution {
public:
    string reverseVowels(string s) {
        vector<char> vowel;
        for(auto i : s)
            if(i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u' 
               || i == 'A' || i == 'E' || i == 'I' || i == 'O' || i == 'U') 
                vowel.push_back(i);
        
        int cnt = vowel.size()-1;
        for(auto &i : s)
        {
            if(i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u'
              || i == 'A' || i == 'E' || i == 'I' || i == 'O' || i == 'U')
            {
                i = vowel[cnt];
                cnt--;
            }
        }
        return s;
    }
};

// 法二
// class Solution {
// public:
//     string reverseVowels(string s) {
//         stack<char> vowel;
//         for(auto &i : s)
//         {
//             if(i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u' ||
//                i == 'A' || i == 'E' || i == 'I' || i == 'O' || i == 'U')
//             {
//                 vowel.push(i);
//             }
//         }
//         for(auto &i : s)
//         {
//             if(i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u' || 
//                 i == 'A' || i == 'E' || i == 'I' || i == 'O' || i == 'U')
//             {
//                 i = vowel.top();
//                 vowel.pop();
//             }
//         }
//         return s;
//     }
        
// };