class Solution {
public:
    string replaceWords(vector<string>& dict, string sentence) {
        vector<string> vec_sentence;
        istringstream iss(sentence);
        string tmp;
        while(iss >> tmp) vec_sentence.push_back(tmp);
        sort(dict.begin(), dict.end(), 
             [](const string s1, const string s2)->bool{return s1.size() < s2.size();});
        for(auto &s: vec_sentence){
            for(int i = 0; i < dict.size(); i++){
                int d_size = dict[i].size();
                if(s.size() > d_size){
                    string sub_str = s.substr(0, d_size);
                    if(sub_str == dict[i]) {
                        s = dict[i];
                        break;
                    }
                }
            }
        }
        string res = "";
        for(int i = 0; i < vec_sentence.size(); i++){
            res += vec_sentence[i];
            if(i != vec_sentence.size()-1) res += " ";
        }
        return res;
    }
};