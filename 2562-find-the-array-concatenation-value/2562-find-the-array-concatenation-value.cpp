class Solution {
    int digit(int n) {
        int ans = 1;
        
        while(n > 1) {
            ans = ans*10;
            n /= 10;
        }
        return ans;
    }
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long ans = 0;
        int nums_size = nums.size();
        int left = 0;
        int right = nums_size-1;
        
        while(left < right) {
            string str = to_string(nums[left++]) + to_string(nums[right--]);
            ans += stoi(str);
        }
        
        if(nums_size % 2 == 1)
            ans += nums[left];
        
        return ans;
    }
};