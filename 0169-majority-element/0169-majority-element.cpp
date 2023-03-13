class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, element = nums[0];
        
        for(auto num : nums) {
            if(num == element)
                count++;
            else
                count--;
            if(count == 0) {
                count = 1;
                element = num;
            }
        }
        return element;
    }
};