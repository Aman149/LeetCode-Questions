class Solution {
    int oddNumbersLessThan(int n){
        return (n+1)/2;
    }
public:
    int countOdds(int low, int high) {
        return oddNumbersLessThan(high) - oddNumbersLessThan(low-1);
    }
};