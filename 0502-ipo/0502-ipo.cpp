#define pi pair<int,int>
#define f first
#define s second

class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n=profits.size();
        vector<pair<int,int>> projects(n);
        for(int i=0;i<n;i++) 
            projects[i]={profits[i],capital[i]}; 
        
        sort(projects.begin(),projects.end(),[&](pi a,pi b){ return a.s<b.s;});
        
        priority_queue<int> pq;
        int i = 0;
        
        while(k) {
            while(i<n && projects[i].second<=w)
                pq.push(projects[i++].first);
            
            if(!pq.empty()) {
                w += pq.top();
                pq.pop();
            }
            k--;
        }
        
        
        return w;
    }
};