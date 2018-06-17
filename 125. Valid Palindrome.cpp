class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for(auto c: s){
            if(isalnum(c)){
                if(isalpha(c)) str += tolower(c);
                else str += c;
            }
        }
        int head = 0;
        int end = str.size()-1;
        while(head < end){
            if(str[head] != str[end]) return false;
            head++;
            end--;
        }
        return true;
    }
};