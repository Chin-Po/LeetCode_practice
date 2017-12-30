class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int size = nums.size() * nums[0].size();
        if(r * c > size || r * c < size) return nums; // CANNOT change
        if(r == nums.size() && c == nums[0].size()) return nums; // NO NEED to change
        vector<vector<int>> res(r, vector<int>(c));
        vector<int> list;
        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < nums[0].size(); j++){
                list.push_back(nums[i][j]);
            }
        }
        int idx = 0;
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                res[i][j] = list[idx];
                idx++;
            }
        }
        return res;
    }
};