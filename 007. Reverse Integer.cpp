class Solution {
public:
    int reverse(int x) {
        int result = 0;
        int new_result;
        while(x != 0){
            int tail = x % 10;
            new_result = result * 10 + tail;
            
            // check overflow
            if((new_result-tail)/10 != result) return 0;
            
            result = new_result;
            x = x / 10;
        }
        return result;
    }
};