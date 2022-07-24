class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int n = arr.size();
        
        //to find a candidate
        int index = 0, count = 1;
        for(int i=1; i<n; i++) {
            if(arr[index] == arr[i])
                count++;
            else
                count--;
            if(count == 0) {
                index = i;
                count = 1;
            }
        }

        return arr[index];
    }
};