class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n = strs.size(), strLen = strs[0].size();
        int iterator = 0, flag = 0, ans = 0;
        
        while(iterator < strLen) {
            for(int i=1; i<n; i++) {
                string prev = strs[i-1], curr = strs[i];
                if(prev[iterator] > curr[iterator])
                     flag++;
            }
            if(flag > 0)
                ans++;
            flag = 0;
            iterator++;
        }
        return ans;
    }
};