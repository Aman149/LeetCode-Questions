class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> ans;
        int sum=0;
        int n = queries.size();
        for(auto num:nums){
            if(num%2==0) sum+=num;
        }
        
        for(int i=0;i<n;i++){
            int val = queries[i][0], ind = queries[i][1];
            int oldVal = nums[ind];
            nums[ind]+=val;
            
            bool wasEven = ( oldVal%2 == 0 );
            bool nowEven = ( nums[ind]%2 == 0 );
            
            if(wasEven and nowEven ){
                sum+=val;
                ans.push_back(sum);
            }
            else if(wasEven and !nowEven){
                sum-= oldVal;
                ans.push_back(sum);
            }
            else if(!wasEven and nowEven){
                sum+=nums[ind];
                ans.push_back(sum);
            }
            else{
                ans.push_back(sum);
            }
        }
        
        return ans;
        
        
    }
};