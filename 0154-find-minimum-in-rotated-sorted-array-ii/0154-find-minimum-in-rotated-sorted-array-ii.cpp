class Solution {
public:
    int findMin(vector<int>& nums) {
        int lastMin = INT_MAX;
        for(int i=0; i<nums.size(); i++) {
            lastMin = min(nums[i], lastMin);
        }
        return lastMin;
    }
};