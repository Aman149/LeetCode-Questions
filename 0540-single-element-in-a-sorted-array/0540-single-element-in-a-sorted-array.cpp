class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int low = 0, high = arr.size()-1, mid;
        
        while(low<high) {
            mid = (low+high)/2;
            
            //If mid is odd make it even
            //as the element at even position and the element at position+1 
            //must be same if the ans is present in right half of the array
            if(mid%2 == 1)
                mid--;
            
            //The element is present in left half
            if(arr[mid] != arr[mid+1])
                high = mid;
            
            else
                low = mid + 2;
                
        }
        return arr[low];
    }
};