
// <Method 1>
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int buy = INT_MAX;
        for(auto i: prices){
            buy = min(buy, i);
            profit = max(profit, i - buy);
        }
        return profit;
    }
};


// <Method 2>
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() < 2) return 0; 
        int res = 0;
        for(int i = 0; i < prices.size()-1; i++){
            for(int j = i + 1; j < prices.size(); j++){
                if(prices[j] > prices[i] && prices[j] - prices[i] > res)
                    res = prices[j] - prices[i];
            }
        }
        return res;
    }
};