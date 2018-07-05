class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        unordered_map<string, vector<string>> m; // content, path
        vector<vector<string>> res; 
        for(auto s: paths){ // go through each string
            istringstream iss(s);
            bool isPath = 1;
            string path;
            string s_tmp;
            while(iss >> s_tmp){
                if(isPath) {path = s_tmp; isPath = 0;}
                else{
                    auto iter = s_tmp.find('(');
                    string content = s_tmp.substr(iter, s_tmp.size()-iter);
                    m[content].push_back(path + "/" + s_tmp.substr(0, iter));
                }
            }
        }
        for(auto e: m){
            if(e.second.size() > 1){
                vector<string> tmp;
                for(auto i: e.second) tmp.push_back(i);
                res.push_back(tmp);
            }
        }
        return res;
    }
};