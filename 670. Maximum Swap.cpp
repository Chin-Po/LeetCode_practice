class Solution {
public:
    int maximumSwap(int num) {
        string str_num = to_string(num);
        if(str_num.size()==1) return num;
        for(int i = 0; i < str_num.size()-1; i++){
            int max_idx = str_num.size()-1;
            for(int j = str_num.size()-1; j > i; j--){ // find the max val
                if(str_num[max_idx] < str_num[j]){
                    max_idx = j;
                }
            }
            if(str_num[max_idx] > str_num[i]){
                swap(str_num[max_idx], str_num[i]);
                return stoi(str_num);
            }
        }
        return num;
    }
};