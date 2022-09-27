class Solution {
public:
    int findLength(vector<int>& a, vector<int>& b) {
        int ans = 0;
        vector<vector<int>> dp(a.size(), vector<int>(b.size(), 0));
        for (int i = 0; i < a.size(); i++) {
            if (a[i] == b[0]){
                dp[i][0] = 1;
                ans=1;
            }
        }
        for (int j = 0; j < b.size(); j++) {
            if (b[j] == a[0]){
                 dp[0][j] = 1;
                 ans=1;
            }
        }
        for (int i = 1; i < a.size(); i++) {
            for (int j = 1; j < b.size(); j++) {
                if (a[i] == b[j]) dp[i][j] = 1 + dp[i - 1][j - 1];
                ans = max(ans, dp[i][j]);
            }
        }
	return ans;


    }
};