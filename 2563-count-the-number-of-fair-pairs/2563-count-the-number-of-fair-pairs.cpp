class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(), nums.end()); 
        int n = nums.size(), lo = n-1, hi = n-1; 
        long long ans = 0; 
        for (int i = 0; i < n; ++i) {
            while (0 <= hi && nums[i] + nums[hi] > upper) --hi; 
            while (0 <= lo && nums[i] + nums[lo] >= lower) --lo; 
            ans += hi - lo; 
            if (i > lo && i <= hi) --ans; 
        }
        return ans/2; 
    }
};