class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int size = nums.size();
        int l = 0, r=size;
        while(l<r){
            int mid = (l+r)/2;
            if(nums[mid]<target)
                l=mid+1;
            else
                r=mid;
        }
        return l;
    }
};