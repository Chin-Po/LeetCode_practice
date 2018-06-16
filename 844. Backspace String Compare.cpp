class Solution {
public:
    bool backspaceCompare(string S, string T) {
        stack<char> stk_S;
        stack<char> stk_T;
        for(auto c: S){
            if(c != '#') stk_S.push(c);
            else {
                if(!stk_S.empty()) stk_S.pop();
            }
        }
        for(auto c: T){
            if(c != '#') stk_T.push(c);
            else {
                if(!stk_T.empty()) stk_T.pop();
            }
        }
        if(stk_S == stk_T) return true;
        else return false;
    }
};