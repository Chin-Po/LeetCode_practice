class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        if(buckets == 1) return 0;
        if(buckets == 2) return 1;
        int times = minutesToTest / minutesToDie;
        int num = times + 1;
        int res = 1;
        while(pow(num, res) < buckets) res++;
        return res;
    }
};