class Solution {
public:
 bool validMountainArray(vector<int>& arr) {
        int i=0;
        
        // To check from the left side
        while(i+1 < arr.size() && arr[i] < arr[i+1])
            i++;
        
        // If there is no right size ie strictly decreasing side or
        //If there is no strictly increasing side or left side
        //Then we return false
        if(i == 0 || i == arr.size()-1)
            return false;
        
        // To count right side 
        while(i+1 < arr.size() && arr[i] > arr[i+1])
            i++;
        
        // I must be equal to array length 4 = 4
        return i==arr.size()-1;
    }
};