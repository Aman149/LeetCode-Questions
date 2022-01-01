class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        // Find Pivot Index https://leetcode.com/problems/find-pivot-index/
        
        int rightSum = 0, leftSum = 0;
        
        for(int i=0; i<nums.size(); i++) 
            rightSum += nums[i];
        
        for(int i=0; i<nums.size(); i++) {
            if(leftSum == rightSum - nums[i] - leftSum)
                return i;
            
            leftSum += nums[i];
        }
        
        return -1;
    }
};