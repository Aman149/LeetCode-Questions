class Solution {
    
    void subsetHelper(vector<int> nums, vector<vector<int>> &ans, vector<int> curr, int i) {
        
        //base case
        if(i >= nums.size()) {
            ans.push_back(curr);
            return;
        }
        
        //exclude the curr element
        subsetHelper(nums, ans, curr, i+1);
        
        //include the curr element
        curr.push_back(nums[i]);
        subsetHelper(nums, ans, curr, i+1);
        
}
    
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr;
        int i=0;
        subsetHelper(nums, ans, curr, i);
        
        return ans;   
    }
};