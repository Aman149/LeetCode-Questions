class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size(); 
        
        for(int i = size-1; i>=0; i--) {
            
            if(i == size-1)
                digits[i]++;
            
            if(digits[i] == 10) {
                digits[i] = 0;
                
                if(i != 0) {
                    digits[i-1]++;
                }
                else {
                    digits.push_back(0);
                    digits[i] = 1;
                }
            }
        }
        return digits;
    }
};