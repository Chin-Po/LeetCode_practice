class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int res = 0;
        int n = nums.size();
        for(int i = 0; i < 32; i++)
        {
            int cnt = 0;
            for(auto num : nums)
            {
                if(num & 1 << i) cnt++;
            }
            res = res + cnt * (n - cnt);
        }
        return res;
    }
};

// reference : http://www.cnblogs.com/grandyang/p/6208062.html