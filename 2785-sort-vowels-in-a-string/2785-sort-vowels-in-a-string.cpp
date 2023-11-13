class Solution {
public:
    string sortVowels(string s) {
        vector<int> positions ;
        vector<char> arrayVowles;
        unordered_set<char> vowles;
        
        for (char c : {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'}) {
        vowles.insert(c);
    }
        
        for(int i=0; i<s.size(); i++) {
            if(vowles.find(s[i]) != vowles.end()) {
                positions.push_back(i);
                arrayVowles.push_back(s[i]);
            }
        }
        
        sort(arrayVowles.begin(), arrayVowles.end());
        
        for(int i=0; i<positions.size(); i++) {
            s[positions[i]] = arrayVowles[i];
        }
        
        return s;
    }
};