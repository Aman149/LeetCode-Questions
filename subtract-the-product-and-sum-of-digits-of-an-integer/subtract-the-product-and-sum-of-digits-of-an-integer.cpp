class Solution {
public:
    int subtractProductAndSum(int n) {
        int productOfDigit = 1, sumOfDigit = 0;
        int remainder = 0;
        
        while(n>0) {
            remainder = n%10;
            sumOfDigit += remainder;
            productOfDigit *= remainder;
            
            n /= 10;  
        }
        return productOfDigit-sumOfDigit;
    }
};