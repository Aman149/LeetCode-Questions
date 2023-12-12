class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> map;
        
        for(auto val: nums1) {
            map[val]++;
        }
        
        vector<int> ans;
        
        for(auto num : nums2) {
            if(map[num] > 0) {
                ans.push_back(num);
                map[num]--;
            }
        }
        
        return ans;
    }
};