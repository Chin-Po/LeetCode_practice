// %%%% Method 1 %%%%
class Solution {
public:
    int countPrimes(int n) {
        if(n <= 2) return 0;
        int cnt = 1; // already includes 2
        for(int i = 3; i < n; i += 2){
            if(isPrime(i)) cnt++;
        }
        return cnt;
    }
    
    bool isPrime(int n){
        for(int i = 3; i * i <= n; i += 2){
            if(n % i == 0) return false;
        }
        return true;
    }
};

// %%%% Method 2 %%%%
// class Solution {
// public:
//     int countPrimes(int n) {
//         if(n <= 2) return 0;
//         int cnt = 1;
//         for(int i = 3; i < n; i += 2){
//             bool isPrime = 1;
//             for(int j = 3; j * j <= i; j += 2){
//                 if(i % j == 0 && i > j){
//                     isPrime = 0;
//                     break;
//                 }
//             }
//             if(isPrime) cnt++;
//         }
//         return cnt;
//     }
// };