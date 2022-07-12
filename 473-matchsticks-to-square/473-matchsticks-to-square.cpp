class Solution {
    bool dfs(vector<int>& matchsticks, vector<int>& kow, int index, int target){
        if(index == -1){
            return true;
        }
        for(int i = 0; i < 4; i++){
            if(((kow[i] + matchsticks[index]) > target) or (i > 0 and kow[i] == kow[i - 1])){
                continue;
            }
            kow[i] += matchsticks[index];
            if(dfs(matchsticks, kow, index - 1, target)){
                return true;
            } 
            kow[i] -= matchsticks[index];
        }
        return false;
    }
    
public:
    bool makesquare(vector<int>& matchsticks) {
        
        int sum = 0;
        for(int i : matchsticks){
            sum += i;
        }
        if(sum%4 != 0 or matchsticks.size() < 3){
            return false;
        }
        sort(matchsticks.begin(), matchsticks.end());
        vector<int> kow(4, 0);
        return dfs(matchsticks, kow, matchsticks.size() - 1, sum/4);
        
        /*
        works if array is sorted.
        int sum = 0;
        int firstFew = 0;
        int find = matchsticks.size()/4;
        for(int i=0,j=0; i<matchsticks.size();i++) {
            sum+= matchsticks[i];
            
            if(j<=find) {
                firstFew += matchsticks[j];
                j++;
            }
        }
        
        if(sum%4 == 0 && (sum-firstFew)/3 >= firstFew)
            return true;
        else
            return false;
        */
    }
};