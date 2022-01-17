class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int ans = 0;
        int sum=0;
        mp[0]++;
 
        for(int i=0; i<nums.size(); i++) {
            sum +=nums[i];
            ans += mp[sum-k];
            mp[sum]++;
        }
        return ans;
        
    }
};