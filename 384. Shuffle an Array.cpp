class Solution {
private:
    vector<int> array;
    vector<int> origi;
    
public:
    Solution(vector<int> nums) {
        array = nums;
        origi = nums;
        srand(time(NULL)); // random seed
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return origi;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        int random;
        for(int i = 0; i < array.size(); i++)
        {
            random = rand() % array.size();
            swap(array[i], array[random]);
        }
        return array;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(nums);
 * vector<int> param_1 = obj.reset();
 * vector<int> param_2 = obj.shuffle();
 */