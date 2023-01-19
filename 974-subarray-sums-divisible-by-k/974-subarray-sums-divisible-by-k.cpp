class Solution {

public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        mp[0]++;
        int currSum = 0, ans = 0, rem = 0;
        
        for(auto i : nums) {

            currSum += i;
            rem = currSum%k;
            
            if(rem < 0)
                rem+=k;
            
            cout<<rem;
            if(mp.find(rem) != mp.end()) 
                ans += mp[rem];
            
            mp[rem]++;
        }
        return ans;
    }
};