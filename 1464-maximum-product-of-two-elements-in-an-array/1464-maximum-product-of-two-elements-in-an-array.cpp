class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int size = nums.size();
        
        //Base case
        if(size == 2)
            return (nums[0]-1)*(nums[1]-1);
        
        //Other conditions
        int max1 = INT_MIN, max2 = INT_MIN;
        
        for(int i=0; i<size; i++) {
            
            if(nums[i] > max1) {  
                max2 = max1;
                max1 = nums[i];
            }
                
            else if(nums[i] > max2)
                max2 = nums[i];
        }
        return (max1-1) * (max2-1);
    }
};