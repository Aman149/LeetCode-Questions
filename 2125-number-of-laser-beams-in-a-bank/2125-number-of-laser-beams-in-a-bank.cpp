class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int totalLaserBeams = 0, previousLevel = 0;
        
        if(bank.size() == 1)
            return 0;
        
        for(int i=0; i<bank.size(); i++) {
            string currentRow = bank[i]; 
            int currentRowLasers = 0;
            for(int i=0; i<currentRow.size(); i++) {
                if(currentRow[i] == '1')
                    currentRowLasers++;
            }
            
            totalLaserBeams += previousLevel * currentRowLasers;
            if(currentRowLasers != 0)
                previousLevel = currentRowLasers;
        }
        
        return totalLaserBeams;
    }
};