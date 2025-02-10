public class Solution {
    public int MaxProfit(int[] prices) {
        int buy = 0, sell = 1;
        int size = prices.Length;
        int maxProfit = 0;

        while(sell < size) {
            if(prices[buy] >= prices[sell]) {
                buy = sell;
            }
            else {
                maxProfit = Math.Max(maxProfit, prices[sell] - prices[buy]);
            }
            sell++;
        }
        return maxProfit;
    }
}