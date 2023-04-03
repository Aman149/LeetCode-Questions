class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        vector<int> count(limit+1, 0);
        for(auto p : people) count[p]++;
        
        int idx = 0;
        for(auto val = 1; val<= limit; val++){
            while(count[val]-- >0)
                people[idx++] = val;
        }
        
        int low = 0, high = people.size() - 1;
        int boatCount = 0;
        while(low <= high) {
            if(people[low]+people[high] <= limit) {
                low++;
                high--;
            }
            else {
                high--;
            }
            boatCount++;
        }
        return boatCount;
    }
};