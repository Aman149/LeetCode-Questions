class Solution {
public:
    bool isAnagram(string s, string t) {
        //base cases
        if(s == t)
            return true;
        if(s.size() != t.size())
            return false;
        //Create an array of size 26 (English Alphabets)
        //Add from s and subtract from t
        int arr[26] = {};
        for(int i=0; i<s.size(); i++) {
            arr[s[i]-'a']++;
            arr[t[i]-'a']--;
        }
        
        for(int i=0; i<26; i++) {
            if(arr[i])
                return false;
        }
        return true;
    }
    
};