class Solution {
    
    int kadane(vector<int> arr, int n) {
     int res = arr[0];
     int maxSum = arr[0];

     for(int i=1; i<n; i++) {
          maxSum = max(maxSum+arr[i], arr[i]);
          res = max(res, maxSum);
     }
     return res;
}
    
public:
    
    int maxSubarraySumCircular(vector<int>& arr) {
        int maxSum = kadane(arr, arr.size());
        if(maxSum < 0)
             return maxSum;

        int arrSum = 0;
        for(int i=0; i<arr.size(); i++) {
            arrSum += arr[i];
            arr[i] = -arr[i];
        }

        int maxCircular = arrSum + kadane(arr, arr.size());
        return max(maxCircular, maxSum);
    }
};