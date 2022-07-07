class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int ans = 1;
        int zeroPos = -1, countZeros = 0;
        
        for(int i=0; i<nums.size(); i++) {
            
            if(nums[i] != 0)
                ans *= nums[i];
            else {
                zeroPos = i;
                countZeros++;
            }       
        }
        
        if(zeroPos != -1) {
            fill(nums.begin(), nums.end(), 0);
            
            if(countZeros > 1)
                return nums;
            else
                nums[zeroPos] = ans;
                return nums;
        }
            
        for(int i=0; i<nums.size(); i++)
            nums[i] = ans/nums[i];        
        
        return nums;
    }
};