class Solution {
public:
    string toGoatLatin(string S) {
        vector<string> vec;
        string str;
        istringstream iss(S);
        while(iss >> str) vec.push_back(str);
        int a_num = 1;
        for(auto &s: vec){
            char head = tolower(s[0]);
            if(head == 'a' || head == 'e' || head == 'i' || head == 'o' || head == 'u') s = s + "ma";
            else{
                char tmp = s[0];
                s.erase(s.begin());
                s = s + tmp;
                s = s + "ma";
            }
            for(int i = 1; i <= a_num; i++) s = s + 'a';
            a_num++;
        }
        string res;
        for(int i = 0; i < vec.size(); i++){
            res = res + vec[i];
            if(i != vec.size() - 1) res += " ";
        }
        return res;
    }
};