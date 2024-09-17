public class Solution {

    public string[] UncommonFromSentences(string s1, string s2) {
        Dictionary<string, int> wordCount = new Dictionary<string, int>();

        void CountWords(string sentence) {
            string[] words = sentence.Split(' ');
            foreach(string word in words) {
                if(wordCount.ContainsKey(word)) {
                    wordCount[word]++;
                }
                else {
                    wordCount[word] = 1;
                }
            }
        }

        CountWords(s1);
        CountWords(s2);

        //find uncommon words
        List<string> result = new List<string>();
        foreach(var entry in wordCount) {
            if(entry.Value == 1)
                result.Add(entry.Key);
        }

        return result.ToArray();
    }
}