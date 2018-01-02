class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int res = 0;
        int sum = 0;
        unordered_map<int, int> m; // sum, idx
        m.insert({0, -1});
        for(int i = 0; i < nums.size(); i++){
            sum = sum + (nums[i] == 1 ? 1 : -1);
            if(m.count(sum)) res = max(res, i - m[sum]);
            else m[sum] = i;
        }
        return res;
    }
};

// ref: http://www.cnblogs.com/grandyang/p/6529857.html