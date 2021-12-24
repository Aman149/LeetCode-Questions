class Solution {
public:
    bool isPalindrome(int x) {
        
        // First reverse the number and then check if both are same or not
        // 12321 == 12321 (Both will be same)
        
        if(x<0)
            return false;
        int rem = 0;
        
        //Old number
        int oldNumber = x;
        
        //To store reversed number
        int pallin = 0;
        
        
        while(x != 0) {
            rem = x%10;
            
            if(pallin > INT_MAX / 10) // Corner Case
                return false;
            pallin  = (pallin*10) + rem;
            x/=10;
        }
        
        if(pallin == oldNumber)
            return true;
        return false;
    }
};