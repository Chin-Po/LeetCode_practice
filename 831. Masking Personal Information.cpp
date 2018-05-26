class Solution {
public:
    string maskPII(string S) {
        string res;
        auto iter = find(S.begin(), S.end(), '@');
        if(iter != S.end()){ // email
            // to lower case
            for(auto &c: S)  
                if(isupper(c)) c = tolower(c);

            // decide name before/after @
            int idx_at = iter - S.begin();
            string name1 = S.substr(0, idx_at);
            string name2 = S.substr(idx_at, S.size()-idx_at);

            // mask
            string head = name1.substr(0, 1);
            string tail = name1.substr(name1.size()-1, 1);
            name1 = head + "*****" + tail;
            res = name1 + name2;
        }
        else{ // phone
            string phone_num;
            for(auto c: S) if(0 <= c - '0' && c - '0' <= 9) phone_num += c;
            int cntry_num = phone_num.size() - 10;
            string last4 = phone_num.substr(phone_num.size()-4, phone_num.size()-1);
            string cntry_num_star;
            for(int i = 0; i < cntry_num; i++) cntry_num_star += '*';
            if(cntry_num != 0)
                res = res + "+" + cntry_num_star + "-";
            res = res + "***-***-" + last4;
        }
        return res;
    }
};