class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(flowerbed.size() == 1 && flowerbed[0] == 0 && n <= 1) return true;
        
        int plantable = 0; // calculate the number
        for(int i = 0; i < flowerbed.size(); i++)
        {
            if(flowerbed[i] == 0 && i-1 >= 0 && i+1 < flowerbed.size() // normal case
               && flowerbed[i-1] == 0 && flowerbed[i+1] == 0)
            {
                plantable++;
                flowerbed[i] = 1;
            }
            if(i == 0 && flowerbed[i] == 0 && flowerbed[1] == 0) // start case
            {
                plantable++;
                flowerbed[i] = 1;
            }
            if(i == flowerbed.size()-1 && flowerbed[i] == 0 && flowerbed[i-1] == 0) // end case
            {
                plantable++;
                flowerbed[i] = 1;
            }
        }
        
        if(plantable >= n) return true;
        else return false;
    }
};