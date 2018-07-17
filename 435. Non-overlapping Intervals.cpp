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
    int eraseOverlapIntervals(vector<Interval>& intervals) {
        sort(intervals.begin(), intervals.end(), [](Interval& i1, Interval& i2)->bool{return i1.start < i2.start;});
        int res = 0;
        int last = 0;
        for(int i = 1; i < intervals.size(); i++){
            if(intervals[last].end > intervals[i].start){ // overlapping!
                res += 1;
                if(intervals[last].end > intervals[i].end) last = i;
            }
            else{ // non-overlapping
                last = i;
            }
        }
        return res;
    }
};