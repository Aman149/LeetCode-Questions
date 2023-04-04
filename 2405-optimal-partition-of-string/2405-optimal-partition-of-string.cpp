class Solution {
public:
    int partitionString(string s) {
        int count = 1;
        string subString = "";
        unordered_set<char> hash;
        for(auto ch : s) {
            if(hash.find(ch) != hash.end()) {
                count++;
                subString = ch;
                hash.clear();
                hash.insert(ch);
            }
            else {
                hash.insert(ch);
                subString += ch;
            }
        }
        return count;
    }
};