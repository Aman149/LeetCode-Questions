class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,int> hash;
        
        string possibleDestination = "";
        
        for(auto &path: paths) {
            hash[path[0]] += 2;
            hash[path[1]] += 1;
        }
        
        for(auto destination: hash){
            if(destination.second == 1)
                possibleDestination = destination.first;
        }
        
        return possibleDestination;
    }
};