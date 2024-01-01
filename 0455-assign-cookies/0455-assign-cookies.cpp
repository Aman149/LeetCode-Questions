class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int greed = 0, cookieSize = 0; 
        int ans = 0;
        
        while(greed < g.size() && cookieSize < s.size()) {
            
            if(g[greed] <= s[cookieSize]) {
                ans++;
                greed++;
                cookieSize++;
            }
            
            else {
                cookieSize++;
            }
                
        }
        return ans;
    }
};