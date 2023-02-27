class Solution {
public:
    bool check(vector<int>& nums) {
        int breakPoint = 0;
        int size = nums.size();
        
        for(int i=0; i<size; i++) {
            if(nums[i] > nums[(i+1)%size])
                breakPoint++;
        }
        return breakPoint <= 1;
    }
};