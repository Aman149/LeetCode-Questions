class Solution {
    int countOps(int num1, int num2, int op=0) {

        if(num1==0 || num2==0) {
            return op;
        }

        if (num1 >= num2) {
            return countOps(num1-num2, num2, op+1);
        }

        else {
            return countOps(num1,num2-num1, op+1);
        }


    }
public:
    int countOperations(int num1, int num2) {
        return countOps(num1, num2);
    }
};