class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> a;
        
        for(int i=0; i<s.size(); i++) {
            if(i%k == 0)
                a.push_back("");
            a.back() +=s[i];
        }
        
        while(a.back().size() < k)
            a.back() +=fill;
        
        return a;
    }
};