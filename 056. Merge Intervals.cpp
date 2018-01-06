/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:
    vector<Interval> merge(vector<Interval>& intervals) {
        vector<Interval> res;
        if(intervals.empty()) return res;
        sort(intervals.begin(), intervals.end(), [](const Interval& v1, const Interval& v2)->bool{
            if(v1.start != v2.start) return v1.start < v2.start;
            else return v1.end < v2.end;
        });
        
        res.push_back(intervals[0]);
        for(int i = 1; i < intervals.size(); i++){
            if(res.back().end >= intervals[i].start)
                res.back().end = max(res.back().end, intervals[i].end);
            else res.push_back(intervals[i]);
        }
        return res;
    }
};