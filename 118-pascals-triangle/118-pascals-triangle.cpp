class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        
        if(numRows == 1) {
            ans.push_back({1});
            return ans;
        }
        
        if(numRows == 2) {
            ans.push_back({1});
            ans.push_back({1,1});
            return ans;
        }
        
        if(numRows >= 3) {
            ans.push_back({1});
            ans.push_back({1,1});
            
            int level = 2;
            
            //i is for levels
            for(int i = 1; i<numRows-1; i++) {
                
                vector<int> v;
                
                //j is for rows i.e to iterate over the elements of current row
                for(int j = 0; j<=level; j++) {
                    
                    if(j==0)
                        v.push_back(ans[i][0]);
                    
                    else if(j == level) 
                        v.push_back(ans[i][level-1]);
                    
                    else
                        v.push_back(ans[i][j-1] + ans[i][j]); 
                }
                
                level++;
                ans.push_back(v);
            } 
            
        }
        return ans;
    }
};