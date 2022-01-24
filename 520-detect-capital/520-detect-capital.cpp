class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.size();
        int cap = 0, small = 0;
        
        for(int i=0; i<n; i++) {
            
            if(isupper(word[i]))
                cap++;
            
            else if(islower(word[i]))
                small++;
        }
        
        //cout<<cap<<" "<<small<<endl;
        
        if(cap == n || small == n)
            return true;
        if(cap == 1 && isupper(word[0]))
            return true;
        
        return false;
    }
};