class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> hash;
        int ans = 0;
        int sum=0;
        hash[0]++;
        
        for(int i=0; i<nums.size(); i++) {
            sum += nums[i];
            
            if(hash.find(sum-k) != hash.end())
                ans += hash[sum-k];
            
            hash[sum]++;
        }
        return ans;
    }
};