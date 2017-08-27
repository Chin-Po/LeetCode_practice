class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        auto iter = digits.rbegin();
        *iter = *iter + 1;
        
        if(*iter != 10) return digits;
        else
        {
            for(auto i = digits.rbegin(); i != digits.rend(); i++)
            {
                if(*i == 10)
                {
                    *i = 0;
                    if((i+1) != digits.rend()) { *(i+1) = *(i+1) + 1; }
                    else { auto it = digits.insert ( digits.begin(), 1); }
                }
            }
            return digits;
        }
    }
};