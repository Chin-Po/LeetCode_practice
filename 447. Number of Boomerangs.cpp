class Solution {
public:
    int numberOfBoomerangs(vector<pair<int, int>>& points) {
        if(points.size() < 3) return 0;
        int res = 0;
        for(int i = 0; i < points.size(); i++){
            unordered_map<int, int> m;
            int diff = 0;
            for(int j = 0; j < points.size(); j++){
                int x_diff = points[i].first-points[j].first;
                int y_diff = points[i].second-points[j].second;
                diff = x_diff*x_diff + y_diff*y_diff;
                ++m[diff];
            }
            for(auto &i : m)
                res = res + (i.second) * (i.second-1);
        }
        return res;
    }
};