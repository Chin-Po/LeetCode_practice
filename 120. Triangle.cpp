class Solution {
public
    int minimumTotal(vectorvectorint& triangle) {
        if(triangle.size() == 1) return triangle[0][0];
        for(int i = 1; i  triangle.size(); i++){
            for(int j = 0; j  triangle[i].size(); j++){
                if(j == 0) triangle[i][0] = triangle[i][0] + triangle[i-1][0];
                else if(j == triangle[i].size()-1) triangle[i][j] = triangle[i][j] + triangle[i-1][j-1];
                else triangle[i][j] = triangle[i][j] + min(triangle[i-1][j-1], triangle[i-1][j]);
            }
        }
        int min = INT_MAX;
        for(auto i  triangle[triangle.size()-1])
            if(i  min) min = i;
        return min;
    }
};