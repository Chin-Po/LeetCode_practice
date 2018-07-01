// method 1
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // exception
        if(target > nums.back()) return nums.size();
        if(target < nums[0]) return 0;
        
        // binary search
        int left = 0;
        int right = nums.size()-1;
        while(left < right){
            int mid = left + (right - left) / 2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] > target) right = mid;
            else left = mid + 1;
            
            if(left == right) break;
        }
        return left;
    }
};



// method 2
// class Solution {
// public:
//     int searchInsert(vector<int>& nums, int target) {
//         int start = 0;
//         int end = nums.size()-1;
//         while(start <= end){
//             int mid = start + (end-start) / 2;
//             if(nums[mid] < target) start = mid + 1;
//             else if(nums[mid] > target) end = mid - 1;
//             else return mid;
//         }
//         return start;
//     }
// };