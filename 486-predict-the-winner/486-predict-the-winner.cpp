class Solution {
    int solve(vector<int>& num, int i, int j) {
        if(i>j)
            return 0;
        if(i == j)
            return num[i];
        
        int s1 = num[i] + min(solve(num, i+2, j), solve(num, i+1, j-1));
        int s2 = num[j] + min(solve(num, i, j-2), solve(num, i+1, j-1));
        return max(s1,s2);
    }
public:
    bool PredictTheWinner(vector<int>& nums) {
        int p1 = solve(nums, 0, nums.size()-1);
        int sum = 0;
        for(int i=0; i<nums.size(); i++) 
            sum += nums[i];
        
        int p2 = sum - p1;
        
        if(p1 >= p2)
            return true;
        else
            return false;
    }
};