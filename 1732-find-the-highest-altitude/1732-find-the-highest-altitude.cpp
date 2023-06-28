class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int leftSum = 0;
        int highestAlt = 0;
        
        for(int i=0; i<gain.size(); i++) {
            leftSum += gain[i];
            highestAlt = max(highestAlt, leftSum);
        }
        
        return highestAlt;
    }
};