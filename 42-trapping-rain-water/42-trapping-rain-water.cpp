class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        
        //Array a is used to store elements from left-right
        int a[n];
        
        //Array b is used to store elements from right-left
        int b[n];
        
        //lMax to maintain left max element and rMax for the right max element
        int ans = 0, lMax = height[0], rMax = height[n-1];
        
        //Left max Array
        for(int i=0; i<n; i++) {
            
            if(height[i] > lMax) {
                lMax = height[i];
                a[i] = lMax;
            }        
            else {
                a[i] = lMax;
            }
        }
        
        //Right max Array
        for(int i=n-1; i>=0; i--) {
            
            if(height[i] > rMax) {
                rMax = height[i];
                b[i] = rMax;
            }        
            else {
                b[i] = rMax;
            }
        }
        
        //Get the minimum of both and subtract it from the current min elements
        for(int i=0; i<n; i++) {
            int currMin = min(a[i], b[i]);
            ans += currMin - height[i];
        }
        
        return ans;
    }
};
