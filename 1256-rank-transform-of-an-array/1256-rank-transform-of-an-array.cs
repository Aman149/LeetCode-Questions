public class Solution {
    public int[] ArrayRankTransform(int[] arr) {
        int[] sortedArr = (int[])arr.Clone();
        Array.Sort(sortedArr);

        Dictionary<int, int> rankMap = new Dictionary<int, int>();
        int rank = 1;

        foreach(int num in sortedArr) {
            if(!rankMap.ContainsKey(num)) {
                rankMap[num] = rank;
                rank += 1;
            }
        }

        int[] rankedArr = new int[arr.Length];

        for (int i = 0; i < arr.Length; i++) {
            rankedArr[i] = rankMap[arr[i]];
        }

        return rankedArr;
    }
}