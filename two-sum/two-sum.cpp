class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); i++) {
            if(mp.find(target-nums[i]) != mp.end()) {
                ans.push_back(mp[target-nums[i]]);
                ans.push_back(i);
            }
            mp[nums[i]] = i;
        }
        return ans;
    }
};

/*
nums = [3,2,4,2], target = 6

3,0
2,3 <- earlier it was 2,1 and then mp[nums[i]] = i will put 3.
4,2

*/