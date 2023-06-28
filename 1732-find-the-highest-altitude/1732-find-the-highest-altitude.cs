public class Solution {
    public int LargestAltitude(int[] gain) {
        int leftSum = 0;
        int higheshAlt = 0;
        for(int i=0; i<gain.Length; i++) {
            leftSum += gain[i];
            higheshAlt = Math.Max(higheshAlt, leftSum);
        }
        return higheshAlt;
    }
}