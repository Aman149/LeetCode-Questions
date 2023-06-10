public class Solution
{
    public int[] Intersection(int[] firstInput, int[] secondInput)
    {
        HashSet<int> presentInFirstInput = new HashSet<int>();
        foreach (var num in firstInput)
        {
            presentInFirstInput.Add(num);
        }

        List<int> intersection = new List<int>();
        foreach (var num in secondInput)
        {
            if (presentInFirstInput.Remove(num))
            {
                intersection.Add(num);
            }
        }

        return intersection.ToArray();
    }
}