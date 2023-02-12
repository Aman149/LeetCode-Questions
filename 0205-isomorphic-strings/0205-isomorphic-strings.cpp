class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,int> hashTable1, hashTable2;
        
        for(int i=0; i<s.size(); i++) {
            
        if(hashTable1[s[i]] != hashTable2[t[i]])
                return false;
            hashTable1[s[i]] = hashTable2[t[i]] = i + 1;
        }
        
        return true;
    }
};