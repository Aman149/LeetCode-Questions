class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n = strs.size(), strLen = strs[0].size(), ans = 0;
        
        for(int j=0;j< strLen; j++) {
            for(int i=1; i<n; i++) {
                if(strs[i-1][j] > strs[i][j]) {
                    ans++;
                    break;
                }
            }
        }
        return ans;
    }
};