class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int> hash;
        
        for(auto num : nums)
            hash[num]++;
        
        int ans = 0;
        for(auto [_,c] : hash) {
            if(c == 1)
                return -1;
            
            ans += ceil((double)(c) / 3);
        }
        
        return ans;
    }
};