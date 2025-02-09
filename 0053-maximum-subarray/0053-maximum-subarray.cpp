class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currMax = nums[0], finalMax = nums[0];

        for(int i=1; i<nums.size(); i++) {
            currMax = max(nums[i], currMax + nums[i]);
            finalMax = max(finalMax, currMax);
        }
        return finalMax;
    }
};