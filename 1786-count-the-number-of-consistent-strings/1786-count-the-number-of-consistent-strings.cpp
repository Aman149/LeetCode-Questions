class Solution
{
    public:
        int countConsistentStrings(string allowed, vector<string> &words)
        {
            bool hash[26] = { 0 };

            for (int i = 0; i < allowed.size(); i++)
                hash[allowed[i] - 'a'] = 1;

            int consistentCount = 0;
            for (int i = 0; i < words.size(); i++)
            {
                string word = words[i];
                bool isWordConsistent = true;
                for (int j = 0; j < word.size(); j++)
                {
                    if (hash[word[j] - 'a'] == false)
                    {
                        isWordConsistent = false;
                        break;
                    }
                }
                if (isWordConsistent == true)
                    consistentCount++;
            }
            return consistentCount;
        }
};