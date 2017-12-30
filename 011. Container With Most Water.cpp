class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size()-1;
        int max_area = 0;
        while(i < j){
            int h = min(height[i], height[j]);
            int area = (j-i) * h;
            max_area = max(max_area, area);
            
            if(height[i] < height[j]) i++;
            else j--;
        }
        return max_area;
    }
};