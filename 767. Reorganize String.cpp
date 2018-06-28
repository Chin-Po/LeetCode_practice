class Solution {
public:
    string reorganizeString(string S) {
        unordered_map<char, int> m; // char, occurence
        for(auto c: S) {
            m[c]++;
            if(m[c] > (S.size()+1) / 2) return "";
        }
        priority_queue<pair<int, char>> pq; // occurence, char
        for(auto e: m){
            pq.push({e.second, e.first});
        }
        string res = "";
        while(pq.size() > 1){
            auto tmp1 = pq.top(); pq.pop();
            auto tmp2 = pq.top(); pq.pop();
            res += tmp1.second; tmp1.first--;
            res += tmp2.second; tmp2.first--;
            if(tmp1.first) pq.push(tmp1);
            if(tmp2.first) pq.push(tmp2);
        }
        if(!pq.empty())
            res += pq.top().second;
        return res;
    }
};