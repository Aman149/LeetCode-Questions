class Solution {
public:
    vector<int> targetIndices(vector<int>& arr, int t) {
        sort(arr.begin(), arr.end());
        vector<int> ans;
        
        for(int i=0; i<arr.size(); i++) {
            if(arr[i] == t)
                ans.push_back(i);
        }
        
        return ans;
    }
};