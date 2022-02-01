class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int window = 0;
        int profit = 0;
        
        for(int i=1; i<prices.size(); i++) {
            
            if(prices[window] > prices[i])
                window = i;
            else
                profit = max(profit, prices[i]-prices[window]);
        }
        
        return profit;
    }
};