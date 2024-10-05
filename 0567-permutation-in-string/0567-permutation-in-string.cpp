class Solution {
public:
    bool checkInclusion(string s1, string s2) {
         int start = 0, end = s1.size();
        int size = s2.size();
        string revstring = s1;
        reverse(revstring.begin(), revstring.end());

        while (end <= size) {
            string s = s2.substr(start, end - start);
            cout<<s<<"-";
            if (s1 == s || revstring == s)
                return true;
            
            end++;
            start++;
        }

        return false;
    }
};