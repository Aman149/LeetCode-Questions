class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        int generatedNum;
        for(int i=1; i<=8; i++) {
            generatedNum = i;
            
            for(int j=i+1; j<=9; j++) {
                
                generatedNum = generatedNum*10+j;
                
                if(generatedNum >= low && generatedNum <= high)
                    ans.push_back(generatedNum);
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
            
    }
};