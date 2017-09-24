class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for(auto &i : s){
            if(i == '(' || i == '[' || i == '{') stk.push(i);
            else{
                if(stk.empty()) return false; // for the case : input = "]"
                else if(!isPair(stk.top(), i)) return false;
                else stk.pop();
            }
        }
        if(stk.empty()) return true;
        else return false; // for the case : input = "["
    }
    bool isPair(char c1, char c2){
        if(c1 == '(' && c2 == ')') return true;
        if(c1 == '[' && c2 == ']') return true;
        if(c1 == '{' && c2 == '}') return true;
        return false;
    }
};