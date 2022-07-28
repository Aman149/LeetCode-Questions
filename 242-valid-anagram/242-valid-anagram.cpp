class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size(), m = t.size() ;
        
        //base case if sizes of both strings are not same
        if(n != m)
            return false;
        
        //add them to unordered map
        unordered_map<char,int> t1, t2;
        for(char it: s)
            t1[it]++;
        for(char it: t)
            t2[it]++;
        
        //check if the occurances are same or not
        for(int i=0; i<n; i++) {
            if(t1[s[i]] != t2[s[i]])
                return false;
        }
        return true;
    }
};