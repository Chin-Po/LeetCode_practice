class Solution {
public:
    void reverseWords(string &s) {
        vector<string> vec_str;
        istringstream iss(s);
        string str;
        while(iss >> str){
            vec_str.push_back(str);
        }
        string tmp = "";
        for(auto iter = vec_str.rbegin(); iter != vec_str.rend(); iter++){
            tmp = tmp + *iter;
            if(iter != vec_str.rend()-1) tmp = tmp + " ";
        }
        s = tmp;
    }
};