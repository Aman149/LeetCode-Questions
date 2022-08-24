class Solution {
public:
    bool isPowerOfThree(int n) {
        while(n%3 == 0 && n != 0) {
            n /= 3;
        }
        if(n == 1)
            return true;
        else
            return false;
    }
};