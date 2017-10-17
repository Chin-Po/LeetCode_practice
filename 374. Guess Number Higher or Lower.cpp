// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        if(guess(n) == 0) return n;
        int min = 1, max = n, med = min + (max - max) / 2;
        while(max > min){
            if(guess(med) == 0) return med;
            if(guess(med) == -1){ // you should guess smaller
                max = med;
                med = min + (max-min) / 2;
            }
            if(guess(med) == 1){ // you should guess larger
                min = med;
                med = min + (max-min) / 2;
            }
        }
    }
};