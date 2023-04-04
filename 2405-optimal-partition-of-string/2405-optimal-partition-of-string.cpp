class Solution {
public:
    int partitionString(string s) {
        int count = 1;
        unordered_set<char> hash;
        for(auto ch : s) {
            if(hash.find(ch) != hash.end()) {
                count++;
                hash.clear();
            }
            hash.insert(ch);
        }
        return count;
    }
};