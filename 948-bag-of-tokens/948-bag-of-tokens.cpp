class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {        
        sort(tokens.begin(), tokens.end());
        int score = 0;
        int maxScore = 0;
        int i = 0;
        int j = tokens.size() - 1;
        
        while(i <= j) {
            if(power >= tokens[i]) {
                score++;
                power -= tokens[i++];
                maxScore = max(maxScore, score);
            }
            else if(score > 0) {
                power = power + tokens[j--];
                score--;
            }
            else {
                return maxScore;
            }
        }
        
        return maxScore;
    }
};