class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> alphabets;
        char i = 0, j = 0;
        int ans = 0;
        while(i < s.size()) {
            
            //Element not fount in set
            if(alphabets.find(s[i]) == alphabets.end()) {
                alphabets.insert(s[i]);
                int n = alphabets.size();
                ans = max(ans, n);
                i++;
            }
            //Element found in set
            else {
                alphabets.erase(s[j]);
                j++;
            }
        }
        return ans;
    }
};