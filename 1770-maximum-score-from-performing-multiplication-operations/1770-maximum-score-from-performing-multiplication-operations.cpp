class Solution {
public:
    int n,m;
    int dp[1001][1001];
    unordered_map<string,int>mp;
    int maximumScore(vector<int>& nums, vector<int>& mt) {
        n= nums.size();
        m= mt.size();
        memset(dp ,0x7f7f6f7f, sizeof dp);
        return solve(0,n-1,0,nums,mt); 
    }
    int solve(int st,int end,int j,vector<int>&nums ,vector<int>&mt){
        if(j>=m || st >end )
            return 0;
        if(dp[st][j]!= 0x7f7f7f7f)
            return dp[st][j];
     
        int choose = max(mt[j]*nums[st]+solve(st+1,end,j+1,nums,mt) , 
                         mt[j]*nums[end]+solve(st,end-1,j+1,nums,mt));
        return dp[st][j]=choose; 
    }
};