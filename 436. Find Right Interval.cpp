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
    vector<int> findRightInterval(vector<Interval>& intervals) {
        vector<int> res;
        vector<int> head;
        unordered_map<int, int> m; // head, index 
        for(int i = 0; i < intervals.size(); i++){
            head.push_back(intervals[i].start);
            m[intervals[i].start] = i;
        }
        sort(head.begin(), head.end(), [](int a, int b)->bool{return a > b;});
        for(auto element: intervals){
            int i = 0;
            for(; i < intervals.size(); i++){
               if(element.end > head[i]) break; 
            }
            if(i > 0) res.push_back(m[head[i-1]]);
            else res.push_back(-1);
        }
        return res;
    }
};