class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        for(int i = 0; i < flowerbed.size(); i++){
            if(n == 0) return true;
            if(flowerbed[i] == 0){
                int pre = (i == 0 ? 0 : flowerbed[i-1]);
                int next = (i == flowerbed.size()-1 ? 0 : flowerbed[i+1]);
                if(pre + next == 0){
                    n -= 1;
                    flowerbed[i] = 1;
                }
            }
        }
        return n == 0 ? true : false;
    }
};