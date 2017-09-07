class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> subans;
        
        if(k > n || k == 0) return ans;
        recur(ans, subans, 1, n, k);
        return ans;
    }
    
    void recur(vector<vector<int>> &ans, vector<int> subans, int start, int n, int k)
    {
        if(subans.size() == k)
        {
            ans.push_back(subans);
            return;
        }
        for(int i = start; i <= n; i++)
        {
            subans.push_back(i);
            recur(ans, subans, i + 1, n, k);
            subans.pop_back();
        }
    }
};