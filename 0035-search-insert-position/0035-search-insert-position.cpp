class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        //Base case
        int low = 0, high = nums.size()-1;
        
        if(nums[0] > target)
            return 0;
        else if(nums[high] < target)
            return high+1;
        
        while(low<=high) {
            int mid = (low+high)/2;
            
            if(nums[mid] == target )
                return mid;
            else if((nums[mid] < target && nums[mid+1] > target))
                return mid+1;
            else if(nums[mid] > target)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return -1;

    }
};