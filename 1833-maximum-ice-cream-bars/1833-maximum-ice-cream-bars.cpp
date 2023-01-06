class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        
        //Base Case
        if(costs[0] > coins)
            return 0;
        
        int ans = 0;
        for(auto item : costs) {
            if(item <= coins) {
                coins -= item;
                ans++;
            }
        }
        return ans;
    }
};