class Solution {
public:
    bool check(vector<int>& nums) {
        
        int size = nums.size();
        int breakPoint = 0;
        for(int i=0; i<size-1; i++) {
            if(nums[i] > nums[i+1])
                breakPoint++;
            
            if(breakPoint > 1)
                return false;
        }
        if(nums[0] < nums[size-1])
            breakPoint++;
        return breakPoint <= 1;
    }
};