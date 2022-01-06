class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int passengersOnTrip[10001] = {0};
        
        for(int i=0; i<trips.size(); i++) {
            passengersOnTrip[trips[i][1]] +=   trips[i][0];
            passengersOnTrip[trips[i][2]] -=   trips[i][0];
        }
        
        int currentPassangers = 0;
        for(int i=0; i<10001; i++) {
            currentPassangers += passengersOnTrip[i];
            if(currentPassangers > capacity)
                return false;
        }
        
        return true;
        
    }
};