class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        int distinct[201] = {0};
        int size = nums.size();
        
        for(auto num : nums) {
            distinct[num]++;
        }
        
        vector<vector<int>> result;

        while(size > 0) {
            
            vector<int> resRow;
            for(int i=0; i<201; i++) {
                if(distinct[i] != 0) {
                    resRow.push_back(i);
                    distinct[i]--;
                    size--;
                }
            }
            
            result.push_back(resRow);
        }
        
        return result;
    }
};