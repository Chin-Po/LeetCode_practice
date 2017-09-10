class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> intersect;
        vector<int> longer;
        vector<int> shorter;
        if(nums1.size() >= nums2.size())
        {
            longer = nums1;
            shorter = nums2;
        }
        else
        {
            longer = nums2;
            shorter = nums1;
        }
        for(auto i : shorter)
        {
            auto iter = find(longer.begin(), longer.end(), i);
            if(iter != longer.end())
                intersect.push_back(i);
        }
        sort(intersect.begin(), intersect.end());
        auto it = unique(intersect.begin(), intersect.end());
        intersect.erase(it, intersect.end());
        return intersect;
    }
};