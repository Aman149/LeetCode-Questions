class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int newSize = 0;
        for(int i=1; i<nums.size(); i++) {
            if(nums[newSize] != nums[i])
                nums[++newSize] = nums[i];
        }
        return newSize+1;
    }
};