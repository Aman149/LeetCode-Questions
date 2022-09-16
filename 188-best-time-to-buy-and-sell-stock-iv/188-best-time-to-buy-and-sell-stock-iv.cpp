class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        const int n = size(prices);
        constexpr auto INF = numeric_limits<int>::max();
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(k + 1, vector<int>(2, INF)));
        function<int(int, int, bool)> getOrCompute;
        getOrCompute = [&](int day, int transactions, bool hasTransaction) {
            if (day == n || transactions == 0) {
                return 0;
            }
            if (dp[day][transactions][hasTransaction] != INF) {
                return dp[day][transactions][hasTransaction];
            }
            int res = 0;
            if (hasTransaction) {
                res = max(
                    res, 
                    max(
                        getOrCompute(day + 1, transactions, true),
                        getOrCompute(day + 1, transactions - 1, false) + prices[day]
                    )
                );
            }
            else {
                res = max(
                    res, 
                    max(
                        getOrCompute(day + 1, transactions, false),
                        getOrCompute(day + 1, transactions, true) - prices[day]
                    )
                );
            }
            return dp[day][transactions][hasTransaction] = res;
        };
        return getOrCompute(0, k, false);
    }
};