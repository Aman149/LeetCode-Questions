class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n = nums.size();
        int ans = -1;
        int minAvgDiff = INT_MAX;
        long long currPreSum = 0, totalSum = 0;

        for(int i=0; i<n; i++) 
            totalSum += nums[i];
        
        for(int i=0; i<n; i++) {
            currPreSum += nums[i];
            long long leftAvg = currPreSum/(i+1);

            long long rightAvg = totalSum - currPreSum;
            if(i != n-1) 
                rightAvg /= n-i-1;

            int currDiff = int(abs(leftAvg-rightAvg));

            if(currDiff < minAvgDiff)   {
                ans = i;
                minAvgDiff = currDiff;
            }
        }
        return ans;
    }
};