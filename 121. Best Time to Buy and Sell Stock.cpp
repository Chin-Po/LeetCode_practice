class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty()) return 0;
        int diff = 0;
        for(int i = 0; i < prices.size()-1; i++){
            for(int j = i; j < prices.size(); j++){
                if(prices[i] < prices[j] && prices[j]-prices[i] > diff){
                    diff = prices[j] - prices[i];
                } 
            }
        }
        return diff;
    }
};