class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        vector<vector<int>> v;
        int minDiff = INT_MAX;
        for(int i=1; i<arr.size(); i++) {
            if(arr[i]-arr[i-1] < minDiff) {
                minDiff = arr[i]-arr[i-1];
            }
        }
       
        for(int i=1; i<arr.size(); i++) {
            if(arr[i]-arr[i-1] == minDiff) {
                int a=min(arr[i],arr[i-1]);
                int b=max(arr[i],arr[i-1]);
                v.push_back({a,b});
            }
        }
        return v;
    }
};