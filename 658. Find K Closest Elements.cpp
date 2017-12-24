class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<pair<int, int>> vp;
        for(auto i: arr){
            int diff = abs(i - x);
            vp.push_back({diff, i});
        }
        sort(vp.begin(), vp.end());
        vector<int> res;
        for(int i = 0; i < k; i++)
            res.push_back(vp[i].second);
        
        sort(res.begin(), res.end());
        return res;
    }
};