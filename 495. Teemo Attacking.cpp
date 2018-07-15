class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int res = 0;
        if(timeSeries.empty()) return 0;
        for(int i = 1; i < timeSeries.size(); i++){
            int diff = timeSeries[i] - timeSeries[i-1];
            res = res + min(duration, diff);
        }
        return res + duration;
    }
};