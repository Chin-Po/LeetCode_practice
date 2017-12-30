class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> intersection;
        vector<int> longer;
        vector<int> shorter;
        if(nums1.size() >= nums2.size()) {longer = nums1; shorter = nums2;}
        else {longer = nums2; shorter = nums1;}
        
        for(auto &i: shorter){
            auto iter = find(longer.begin(), longer.end(), i);
            if(iter != longer.end()){
                intersection.push_back(i);
                longer.erase(iter);
            }
        }
        return intersection;
    }
};