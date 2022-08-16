class Solution {
public:
    int firstUniqChar(string s) {
        ios_base::sync_with_stdio(0);
        vector<int> v(26);
        
        int n = s.length();
        
        for(char c : s)
            v[c-'a']++;
        
        for(int i = 0; i < n; i++) {
            if(v[s[i] - 'a'] == 1) 
                return i;
        }
        
        return -1;
    }
};