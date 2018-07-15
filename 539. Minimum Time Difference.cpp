class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int res = INT_MAX;
        sort(timePoints.begin(), timePoints.end());
        for(int i = 0; i < timePoints.size(); i++){
            string time1 = timePoints[i];
            string time2 = (i == timePoints.size()-1 ? timePoints[0] : timePoints[i+1]);
            int h1 = (time1[0] - '0') * 10 + (time1[1] - '0');
            int m1 = (time1[3] - '0') * 10 + (time1[4] - '0');
            int h2 = (time2[0] - '0') * 10 + (time2[1] - '0');
            int m2 = (time2[3] - '0') * 10 + (time2[4] - '0');
            int diff = (h2 - h1) * 60 + (m2 - m1);
            if(i == timePoints.size() - 1) diff += 24 * 60;
            res = min(res, diff);
        }
        return res;
    }
};