class Solution {
public:
    int findMin(vector<int>& nums) {
        int prev = nums[0];
        for(int i=1; i<nums.size(); i++) {
            if(nums[i] < prev)
                return nums[i];
            else
                prev = nums[i];
        }
        return nums[0];
    }
};