public class Solution {
    public void SortColors(int[] nums) {
        int zeros = 0, two = nums.Length - 1, i=0;
        while (i <= two) {
            if(nums[i] == 0) {
                (nums[i], nums[zeros]) = (nums[zeros], nums[i]);
                zeros++;
                i++;
            }
            else if(nums[i] == 2) {
                (nums[i], nums[two]) = (nums[two], nums[i]);
                two--;
            }
            else {
                i++;
            }
        }
    }
}