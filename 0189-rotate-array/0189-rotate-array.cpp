class Solution {
    void rotateHelper(vector<int>& nums, int start, int end) {
        while(start<end)
            swap(nums[start++], nums[end--]);
    }
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        
        if(k > size)
            k = k%size;
        size--;
        
        //Rotate the first part
        rotateHelper(nums,0,size-k);
        
        //Rotate the second part
        rotateHelper(nums,size-k+1,size);
        
        //rotate the whole array
        rotateHelper(nums,0,size);
    }
};

//4,3,2,1,7,6,5
//5,6,7,1,2,3,4
