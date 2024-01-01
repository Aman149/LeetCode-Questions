class Solution {
public:
    int findContentChildren(vector<int>& greed, vector<int>& children) {
        sort(greed.begin(), greed.end());
        sort(children.begin(), children.end());
        
        int greedIterator = 0, cookiesIterator = 0, ans = 0;
        
        while(greedIterator < greed.size() && cookiesIterator < children.size()) {
            
            if(greed[greedIterator] <= children[cookiesIterator]) {
                ans++;
                greedIterator++;
                cookiesIterator++;
            }
            
            else {
                cookiesIterator++;
            }
        }
        
        return ans;
    }
};