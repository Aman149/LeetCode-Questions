class Solution {
    public int largestAltitude(int[] gain) {
        int leftSum = 0;
        int highestAlt = 0;
        
        for(int i=0; i<gain.length; i++) {
            leftSum += gain[i];
            highestAlt = Math.max(highestAlt, leftSum);
        }
        
        return highestAlt;
    }
}