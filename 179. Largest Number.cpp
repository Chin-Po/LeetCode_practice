class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> str_nums;
        for(auto i : nums){
            str_nums.push_back(to_string(i));
        }
        sort(str_nums.begin(), str_nums.end(), 
             [](const string s1, const string s2)->bool{return (s1+s2) > (s2+s1);});
        
        string res = "";
        for(auto &i : str_nums) res = res + i;
        
        // in case of {0.0} or {0}
        int idx = 0;
        while(idx < res.size()-1 && res[idx] == '0') idx++;
        res = res.substr(idx);
        
        return res;
    }
};