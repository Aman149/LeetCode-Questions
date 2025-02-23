public class Solution {
    public void NextPermutation(int[] nums) {
        int ind = -1;
        int n = nums.Length;

        //Find the break point
        for(int i=n-2; i>=0; i--) {
            if(nums[i] < nums[i+1]) {
                ind = i;
                break;
            }
        }

        //Handling the corner case when current permutation is last permutation
        if(ind == -1) {
            Array.Reverse(nums);
            return;
        }

        //Find the next permutation
        for (int i = n - 1; i > ind; i--) {
            if(nums[i] > nums[ind]) {
                // Swap nums[ind] and nums[i]
                int temp = nums[ind];
                nums[ind] = nums[i];
                nums[i] = temp;
                break;
            }
        }
        //reverse the remaining elements 
        Array.Reverse(nums, ind + 1, n - (ind + 1));
        return;
    }
}