class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        
        // Step 1: Filter out numbers out of range [1, n]
        for (int i = 0; i < n; ++i) {
            if (nums[i] <= 0 || nums[i] > n) {
                nums[i] = n + 1;  // Any number > n will do (to ignore it)
            }
        }
        
        // Step 2: Use index marking to keep track of existing numbers
        for (int i = 0; i < n; ++i) {
            int num = abs(nums[i]);
            if (num <= n) {
                nums[num - 1] = -abs(nums[num - 1]);  // Mark as found
            }
        }
        
        // Step 3: Find the first missing positive
        for (int i = 0; i < n; ++i) {
            if (nums[i] > 0) {
                return i + 1;
            }
        }
        
        // If all numbers from 1 to n are present, return n + 1
        return n + 1;
    }
};