class Solution {
public:
    string pushDominoes(string dominoes) {
        int n = dominoes.size();
        vector<int> left(n,0), right(n,0);
        char prev = '.';
        int count = 1;
        
        //Left to Right traversal
        for(int i=0; i<n; i++) {
            if(dominoes[i] == 'R') {
                prev = 'R';
                count = 1;
                continue;
            }
            
            if(dominoes[i] == 'L')
                prev = 'L';
            
            if(prev == 'R' && dominoes[i] == '.') {
                right[i] = count;
                count++;
            }
        }
            
        prev = '.';
        count = 1;
        //Right to Left traversal
        for(int i=n-1; i>=0; i--) {
            if(dominoes[i] == 'L') {
                prev = 'L';
                count = 1;
                continue;
            }
            
            if(dominoes[i] == 'R')
                prev = 'R';
            
            if(prev == 'L' && dominoes[i] == '.') {
                left[i] = count;
                count++;
            }
        }
        
        string ans = "";
        for(int i=0; i<n; i++) {
            
            if(left[i] == 0 && right[i] == 0)
                ans+= dominoes[i];
            
            else if(left[i] == 0)
                ans+= 'R';
            
            else if(right[i] == 0)
                ans+= 'L';
            
            else if(left[i] == right[i])
                ans += '.';
            
            else if(left[i] > right [i])
                ans+= 'R';
            
            else
                ans+= 'L';
        }
        
        return ans;
    }
};


    
