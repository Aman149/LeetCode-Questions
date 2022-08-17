class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string morse[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string> hash;
        for(int i=0; i<words.size(); i++) {
            string s = words[i];
            string m;
            for(int j=0; j<s.size(); j++) {
                m += morse[s[j]-'a'];
            }
            hash.insert(m);
        }
        return hash.size();
    }
};