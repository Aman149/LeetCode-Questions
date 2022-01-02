class Solution {
public:
    
    //https://www.youtube.com/watch?v=toYgBIaUdfM
    int numPairsDivisibleBy60(vector<int>& time) {
        vector<int> rem(60);
        for(int i=0; i<time.size(); i++)
            rem[time[i]%60] += 1 ;
        
        int count = 0;
        //special cases are 0 and 30 
        // ((N-1)*N)/2 
        count += ((rem[0]-1) * rem[0]) / 2;
        count += ((rem[30]-1) * rem[30]) / 2;
        
        for(int i=1; i<30; i++)
            count+= rem[i] * rem[60-i];
        
        return count;
    }
};