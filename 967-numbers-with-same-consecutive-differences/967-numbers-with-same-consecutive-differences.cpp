class Solution {
public:
    vector<int> numsSameConsecDiff(int n, int k) {
        queue<int> q;
        for(int i=1;i<=9;i++){
            q.push(i);
        }
        
        while(--n) {
            int qSize = q.size();
            
            for(int i=0; i<qSize; i++) {
                int currElement = q.front();
                q.pop();
                int lastNum = currElement % 10;
                
                if(lastNum + k <= 9)
                    q.push(currElement*10+(lastNum+k));
                if(lastNum - k >= 0 && k > 0)
                    q.push(currElement*10+(lastNum-k));
            }
        }
        
        vector<int> ans;
        while(q.empty() == false) {
            ans.push_back(q.front());
            q.pop();
        }
        return ans;
    }
};