class Solution {
public:
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> m_freq;
        for(auto &s: words) m_freq[s]++;
        
        map<int, set<string>> m;
        for(auto &i : m_freq) m[i.second].insert(i.first);
        vector<string> res;
        
        for(auto iter = m.rbegin(); iter != m.rend(); iter++){
            if(k <= 0) break;
            auto tmp_set = iter->second;
            vector<string> v(tmp_set.begin(), tmp_set.end());
            
            if(k >= tmp_set.size()) res.insert(res.end(), v.begin(), v.end());
            else res.insert(res.end(), v.begin(), v.begin() + k);
        
            k = k - tmp_set.size();
        }
        
        return res;
    }
};