class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        vector<pair<int, string>> num_name; // number, domain
        string num;
        string name;
        for(auto s: cpdomains){
            istringstream iss(s);
            iss >> num >> name;
            num_name.push_back({str2int(num), name});
        }
        unordered_map<string, int> m;
        for(auto p: num_name){
            int num = p.first;
            string allName = p.second;
            for(int i = 0; i < allName.size(); i++){
                if(i == 0) m[allName] += num;
                if(allName[i] == '.') m[allName.substr(i+1, allName.size() - i)] += num;
            }
        }
        vector<string> res;
        for(auto element: m){
            string result = to_string(element.second) + " " + element.first;
            res.push_back(result);
        }
        return res;
    }
    int str2int(string str){
        int res = 0;
        int idx = 1;
        for(int i = str.size()-1; i >= 0; i--){
            res += idx * (str[i]-'0');
            idx *= 10;
        }
        return res;
    }
};