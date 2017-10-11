class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 1) return true;
        long idx = num / 2;
        long square = idx * idx;
        while(square > num){
            idx = idx / 2;
            square = idx * idx;
        }
        for(int i = idx; i <= 2 * idx; i++){
            if(i*i == num) return true;
        }
        return false;
    }
};