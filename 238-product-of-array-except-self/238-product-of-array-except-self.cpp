class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //O(1) Space, O(n) Time Complexity
        
        //ans variable to store the product of array. 
        int ans = 1;
        //zeroPos to store position of zero, CountZeros to count if there are more than one zero or not
        int zeroPos = -1, countZeros = 0;
        
        //Iterate and calc. prod. countzero and pos of zero
        for(int i=0; i<nums.size(); i++) {
            
            if(nums[i] != 0)
                ans *= nums[i];
            else {
                zeroPos = i;
                countZeros++;
            }       
        }
        
        //if zero exists
        if(zeroPos != -1) {
            fill(nums.begin(), nums.end(), 0);
            
            //if there are more than one zero i.e the ans array will only contain zeros
            if(countZeros > 1)
                return nums;
            else
                nums[zeroPos] = ans;
                return nums;
        }
            
        //If no zeros exists then then calculate. 
        for(int i=0; i<nums.size(); i++)
            nums[i] = ans/nums[i];        
        
        return nums;
    }
};