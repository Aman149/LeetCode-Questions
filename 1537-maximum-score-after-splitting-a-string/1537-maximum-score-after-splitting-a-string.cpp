class Solution {
public:
    int maxScore(string s) {
        
        int oneSum = 0;
        for(auto ch : s)
            if(ch == '1')
                oneSum++;

        int maxSum = 0, zeroSum = 0;
        for(int i=0; i<s.size()-1; i++) {
            if(s[i] == '0') {
                zeroSum++;
            }
            else if(s[i] == '1' && oneSum > 0) {
                oneSum--;
            }
            maxSum = max(maxSum, zeroSum+oneSum);
        }

        return maxSum;
    }
};