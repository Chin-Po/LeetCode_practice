class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        stack<int> stk;
        int max = 0;
        
        for(int i = 0; i < nums.size(); i++){
            if(stk.empty()) stk.push(nums[i]);
            else{
                if(stk.top() < nums[i]) stk.push(nums[i]);
                else{
                    int cnt = 0;
                    while(!stk.empty()){
                        cnt++;
                        stk.pop();
                    }
                    if(cnt > max) max = cnt;
                    stk.push(nums[i]);
                }
            }
        }
        int cnt = 0;
        while(!stk.empty()){
            cnt++;
            stk.pop();
        }
        if(cnt > max) max = cnt;
        return max;
        
    }
};