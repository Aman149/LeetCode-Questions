class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0) {
            return false;
        }
        if (n == 1) {
            return true;
        }

        int p = 1;
        int num = n;

        while (num > 0) {
            if (num & 1) {
                return (p - 1) % 2 == 0 && (n & (n - 1)) == 0;
            }
            p++;
            num >>= 1;
        }
        return false;
    }
};
