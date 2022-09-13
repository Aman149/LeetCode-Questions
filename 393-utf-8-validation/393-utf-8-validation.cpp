class Solution {
public:
    bool validUtf8(vector<int>& data) {
        int rb=0;
for(auto it:data){

        if(rb == 0)
        {
            if(it>>7 == 0b0)            
                rb = 0;
            else if(it>>5 == 0b110)
               rb = 1;
          else if(it>>4 == 0b1110)
            
                rb = 2;
        
            else if(it>>3 == 0b11110)
                rb = 3;
            else
               return false;
            
        }
        else
        {
            if(it>>6 == 0b10)
             rb--;
            else
             return false;        
        }        
    }      
    if(rb==0)
        return true;
    return false;
    }
};