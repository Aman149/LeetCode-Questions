class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> ans;

        // Check if the total number of elements matches m * n
        if (original.size() != m * n) {
            return {}; // Return an empty vector if it doesn't match
        }

        int index = 0;
        for (int i = 0; i < m; i++) {

            vector<int> row;
            for (int j = 0; j < n; j++)
                row.push_back(original[index++]);

            ans.push_back(row);
        }
        return ans;
    }
};