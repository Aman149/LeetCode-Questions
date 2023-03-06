class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeroIndex = 0, oneIndex = 0, twoIndex = nums.size()-1;
        
        while(oneIndex <= twoIndex) {
            
            if(nums[oneIndex] == 1)
                oneIndex++;
            
            else if(nums[oneIndex] == 0)
                swap(nums[zeroIndex++], nums[oneIndex]);
            
            else if(nums[oneIndex] == 2)
                swap(nums[oneIndex], nums[twoIndex--]);
            
            if(zeroIndex > oneIndex)
                oneIndex = zeroIndex;
            
        }
    }
};