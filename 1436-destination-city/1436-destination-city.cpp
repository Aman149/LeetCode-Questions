class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> hash;
        
        for(auto &path : paths)
            hash.insert(path[0]);
        
        for(auto &path : paths) {
            string destination = path[1];
            if(hash.find(destination) == hash.end())
                return destination;
        }
        
        return "";
    }
};