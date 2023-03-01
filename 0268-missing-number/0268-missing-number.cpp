class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int currSum = 0;
        for(auto num : nums)
            currSum += num;
        return (n*(n+1)/2)-currSum;
    }
};