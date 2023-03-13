class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> hash;
        for(auto num : nums)
            hash[num]++;
        
        int majCount = nums.size()/2;
        
        for(auto element : hash)
            if(element.second > majCount)
                return element.first;
        return 0;
    }
};