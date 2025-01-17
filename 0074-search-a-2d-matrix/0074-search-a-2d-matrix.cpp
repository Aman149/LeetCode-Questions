class Solution {
public:

    bool binarySearch(vector<int> arr, int target) 
    {
        int low = 0, high = arr.size()-1;
        while(low <= high)
        {
            int mid = (low+high) / 2;

            if(arr[mid] == target)
                return true;
            else if(arr[mid] < target)
                low = mid + 1;
            else
                high = mid -1;
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0; i<matrix.size(); i++)
        {
            if (matrix[i][0] <= target && matrix[i][matrix[0].size() - 1] >= target) 
            {
                if (matrix[i][0] == target || matrix[i][matrix[0].size() - 1] == target)
                    return true;
                else if(binarySearch(matrix[i], target))
                    return true;
            }
                
        }
        return false;
    }
};