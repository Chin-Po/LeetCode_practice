class Solution {
public:
    bool wordPattern(string pattern, string str) {
        vector<string> vec_str;
        istringstream iss(str);
        string tmp;
        while(iss >> tmp) vec_str.push_back(tmp);
        if(vec_str.size() != pattern.size()) return false;
        
        unordered_map<char, string> m;
        for(int i = 0; i < vec_str.size(); i++){
            if(m.count(pattern[i]) != 0){ // pattern exists
                if(m[pattern[i]] != vec_str[i]) return false;
            }
            else{ // pattern not exist
                // make sure the corresponding str does not exist either
                for(auto element: m){ 
                    if(element.second == vec_str[i]) return false;
                }
                m[pattern[i]] = vec_str[i];
            }
        }
        return true;
    }
};