class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        if(nums.size()<3) return INT_MAX;
        sort(nums.begin(), nums.end());
        int min_diff = INT_MAX;
        for(int i = 0; i < nums.size()-2 ;i++){
            int left = i + 1;
            int right = nums.size()-1;
            while(left < right){
                int diff = nums[i] + nums[left] + nums[right] - target;
                if(abs(diff) < abs(min_diff)) min_diff = diff;
                
                if(diff == 0) break;
                else if(diff < 0) left++;
                else right--;
            }
        }
        return target + min_diff;
        
        
        // BRUTAL FORCE
        // map<int, int> m;
        // for(int i = 0; i < nums.size()-2; i++){
        //     for(int j = i + 1; j < nums.size()-1; j++){
        //         for(int k = j + 1; k < nums.size(); k++){
        //             int sum = nums[i] + nums[j] + nums[k];
        //             int diff = abs(target - sum);
        //             if(diff == 0) return sum;
        //             else m.insert(pair<int, int>(diff, sum));
        //         }
        //     }
        // }
        // auto iter = m.begin();
        // return iter->second;
    }
};