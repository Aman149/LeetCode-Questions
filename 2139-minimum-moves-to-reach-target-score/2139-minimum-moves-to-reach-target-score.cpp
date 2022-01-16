class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int i=0;
        while(target > 1) {
            
            if(maxDoubles == 0) {
                //int x = target-1; 
                return i+target-1;
            }
            
            if(target % 2 == 0 && maxDoubles > 0 ) {
                target = target/2;
                maxDoubles -=1;
            }
            else
                target -=1;
            
            i+=1;
        }
        return i;
    }
};