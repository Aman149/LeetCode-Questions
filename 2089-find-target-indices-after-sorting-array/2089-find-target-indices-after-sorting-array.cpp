class Solution {
public:
    vector<int> targetIndices(vector<int>& arr, int t) {
        int lessThan = 0, equalTo = 0;
        
        for(auto i : arr) {
            if(i < t)
                lessThan++;
            else if(i == t)
                equalTo++;
        }
        
        vector<int> ans;
        for(int i=0; i<equalTo; i++) {
            ans.push_back(lessThan++);
        }
        return ans;
    }
};