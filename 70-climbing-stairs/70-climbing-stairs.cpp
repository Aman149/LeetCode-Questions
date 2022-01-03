class Solution {
public:
    
       int fib(int n) {
        
        if(n < 2) 
            return n;
        
        int first = 0,  second = 1;
        int ans = first+second;
    
        for(int i = 2; i < n; i++) {
            first = second;
            second = ans;
            ans = first+second;
        }
        return ans;
    }
    
    int climbStairs(int n) {
        return fib(n+1);
    }
};