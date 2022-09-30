class Solution {
public:
    static vector<vector<int>> getSkyline(const vector<vector<int>>& buildings) {
        if (buildings.empty()) return {};
        
        vector<pair<int, int>> walls;
        for (const vector<int>& building : buildings) {
            // Add left wall has negative height, to make sure it
            // shows up first, and we don't have to use a custom sort.
            walls.emplace_back(building[0], -building[2]);
            walls.emplace_back(building[1], building[2]);
        }
        sort(begin(walls), end(walls));
        
        vector<vector<int>> ans;

        multiset<int> wall_heights = {0};
        int top = 0;
        for (auto wall : walls) {
            if (wall.second < 0) {
                wall_heights.insert(-wall.second);
            } else {
                wall_heights.erase(wall_heights.find(wall.second));
            }
            
            if (*wall_heights.rbegin() != top) {
                top = *wall_heights.rbegin();
                ans.push_back({wall.first, top});
            }
        }
        
        return ans;
    }
};