class Solution {
public:
    int magicalString(int n) {
        if(n <= 0) return 0;
        if(n <= 3) return 1;
        int res = 1;
        int head = 2;
        int tail = 3;
        int num = 1;
        vector<int> v{1, 2, 2};
        while(tail < n){
            for(int i = 0; i < v[head]; i++){
                v.push_back(num);
                if(num == 1 && tail < n) res++;
                tail++;
            }
            num = num ^ 3;
            head++;
        }
        return res;
    }
};

// ref: http://www.cnblogs.com/grandyang/p/6286540.html