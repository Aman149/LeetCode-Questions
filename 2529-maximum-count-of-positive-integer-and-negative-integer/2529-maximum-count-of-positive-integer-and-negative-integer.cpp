class Solution {
public:
    int maximumCount(vector<int>& arr) {
        int size = arr.size()-1;
        
        if(arr[0] > 0)
            return size+1;
        if(arr[size] < 0)
            return size+1;
        if(arr[0] == 0 && arr[size] == 0)
            return 0;
        
        int low = 0, high = size, mid, pos, neg;
        
        //Find the last occurance of -ve no
        while(low <= high) {
            mid = low+(high-low)/2;
            
            if(arr[mid] < 0){
                low = mid+1;
                neg = mid;
            }
            
            else if(arr[mid] >= 0)
                high = mid-1;   
        }
        
        low = 0;high = size;
        //Find the first occurance of +ve no
        while(low <= high) {
            mid = low+(high-low)/2;
            
            if(arr[mid] > 0) {
                high = mid - 1;
                pos = mid;
            }
            
            else if(arr[mid] <= 0)
                low = mid + 1;
                
        }
        
        cout<<arr[0]<<" "<<neg<<" "<<pos<<endl;
        return max(neg+1, size-pos+1);
        
    }
};