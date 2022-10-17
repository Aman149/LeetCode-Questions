class Solution {
public:
    bool checkIfPangram(string sentence) {
        int hash[26] = {0};
        
        for(auto x : sentence) {
            hash[x-'a']++;
        }
        
        for(int i=0; i<26; i++) {
            if(hash[i] == 0)
                return false;
        }
        return true;
    }
};