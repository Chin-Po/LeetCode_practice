class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        double res = 0;
        for(int i = 0; i < points.size()-2; i++){
            vector<int> A = points[i];
            for(int j = i + 1; j < points.size()-1; j++){
                vector<int> B = points[j];
                for(int k = j + 1; k < points.size(); k++){
                    vector<int> C = points[k];
                    double area = 0.5 * abs(C[0]*A[1] + B[0]*C[1] + A[0]*B[1] - B[0]*A[1] - A[0]*C[1] - C[0]*B[1]);
                    res = max(res, area);
                }
            }
        }
        return res;
    }
};