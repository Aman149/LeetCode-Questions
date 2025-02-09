class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currMax = 0, finalMax = INT_MIN;

        for(int num : nums) {
            currMax += num;
            currMax = max(currMax, num);
            finalMax = max(finalMax, currMax);
        }
        return finalMax;
    }
};