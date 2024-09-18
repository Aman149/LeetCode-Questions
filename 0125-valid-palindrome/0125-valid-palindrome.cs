public class Solution {
    public bool IsPalindrome(string s) {
        string str = s.ToLower();

        string filteredString = "";
        foreach(char c in str) {
            if(Char.IsLetterOrDigit(c)) {
                filteredString += c;
            }
        }

        int left = 0;
        int right = filteredString.Length - 1;

        while(left < right) {
            if(filteredString[left] != filteredString[right])
                return false;

            left++;
            right--;
        }
        return true;
    }
}