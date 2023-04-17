class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCandie = *max_element(candies.begin(), candies.end());
        vector<bool> ans;
        for(auto candie : candies) {
            if(maxCandie != candie && candie+extraCandies >= maxCandie)
                ans.push_back(true);
            else if(maxCandie == candie)
                ans.push_back(true);
            else
                ans.push_back(false);
        }
        return ans;
    }
};