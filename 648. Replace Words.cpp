class Solution {
public:
    string replaceWords(vector<string>& dict, string sentence) {
        sort(dict.begin(), dict.end(), 
             [](const string& s1, const string& s2)->bool{return s1.size() < s2.size();});
        istringstream iss(sentence);
        string str;
        vector<string> vec_sentence;
        string res = "";
        while(iss >> str) vec_sentence.push_back(str);
        for(unsigned i = 0; i < vec_sentence.size(); i++)
        {
            for(unsigned j = 0; j < dict.size(); j++)
            {
                int length = dict[j].size();
                if(length > vec_sentence[i].size()) break;
                string sub_str = vec_sentence[i].substr(0, length);
                if(sub_str == dict[j]) {vec_sentence[i] = dict[j]; break;}
            }
        }
        for(unsigned i = 0; i < vec_sentence.size(); i++)
        {
            if(i != vec_sentence.size()-1) res = res + vec_sentence[i] + " ";
            else res = res + vec_sentence[i];
        }
        return res;
    }
};