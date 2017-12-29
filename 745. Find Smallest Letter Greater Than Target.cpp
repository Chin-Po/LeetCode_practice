class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        if(letters.back() - target <= 0) return letters[0];
        int start = 0;
        int end = letters.size()-1;
        while(start <= end){
            int mid = start + (end - start) / 2;
            if(letters[mid] - target > 0) end = mid - 1;
            if(letters[mid] - target <= 0) start = mid + 1;
        }
        return letters[start];
    }
};