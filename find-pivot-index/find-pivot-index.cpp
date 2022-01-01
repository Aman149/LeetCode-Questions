class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int rightSum = 0, leftSum = 0;
        
        for(int i=0; i<nums.size(); i++) 
            rightSum += nums[i];
        
         for(int i=0; i<nums.size(); i++)  {
             if(leftSum == rightSum - nums[i] - leftSum)
                 return i;
             leftSum += nums[i];
         }
              
        return -1;
    }
};