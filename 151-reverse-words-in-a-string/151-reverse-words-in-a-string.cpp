class Solution {

public:
    string reverseWords(string s) {
    reverse(begin(s), end(s));
        int n = s.size();
        int i = 0;
        
        // Step 1.
        while(i < n) {
            if(s[i] == ' ') {
                i++;
                continue;
            }
            
            int j = i;
            while(j < n && s[j] != ' ') {
                j++;
            }
            
            reverse(begin(s)+i, begin(s)+j);
            i = j;
        }
        
        i = 0;
        int j = 0;
        
        while(j < n) {
            while(j < n && s[j] == ' ') {
                j++;
            }
            if(j == n) break;
            
            // Handles one space between each word
            if(i != 0) {
                s[i++] = ' ';
            }
            
            while(j < n && s[j] != ' ') {
                s[i++] = s[j++];
            }
        }
        
        return s.substr(0,i);
    }
};