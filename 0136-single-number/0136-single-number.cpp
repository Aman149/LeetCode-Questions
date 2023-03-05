class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> hash;
        for(auto num : nums) {
            hash[num]++;
        }
        
        for(auto element : hash)
            if(element.second == 1)
                return element.first;
        return -1;
    }
};