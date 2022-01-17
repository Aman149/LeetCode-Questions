class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        for(int i=1; i<n; i++)
            nums[i] += nums[i-1];
        return ((n*(n+1))/2)-nums[n-1];
    }
};