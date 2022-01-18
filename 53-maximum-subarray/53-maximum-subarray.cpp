class Solution {
public:
    //This problem is basic application of kadence algorithm
    int maxSubArray(vector<int>& nums) {
        int currMax = 0;
        int tillMax = INT_MIN;
        
        for(int i=0; i<nums.size(); i++) {
            currMax += nums[i];
            tillMax = max(tillMax, currMax);
            
            if(currMax <0)
                currMax = 0;
        }
        return tillMax;
    }
};