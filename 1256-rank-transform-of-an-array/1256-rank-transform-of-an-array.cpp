class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int,int> hash;

        for(auto num : arr) 
            hash[num] = 0;
        
        int rank = 1;
        for(auto& num : hash) {
            num.second = rank;
            rank+= 1;
        }

        vector<int> rankedArr;
        for(auto num : arr) {
            rankedArr.push_back(hash[num]);
        }

        return rankedArr;
            
    }
};