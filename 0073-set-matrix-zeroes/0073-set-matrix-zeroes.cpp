class Solution {
    
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size(), col = matrix[0].size();
        bool firstRowZero = false, firstColZero = false;

        // Check if first row should be zero
        for(int j = 0; j < col; j++) {
            if(matrix[0][j] == 0) {
                firstRowZero = true;
                break;
            }
        }
        
        // Check if first column should be zero
        for(int i = 0; i < row; i++) {
            if(matrix[i][0] == 0) {
                firstColZero = true;
                break;
            }
        }

        //Rows and Col
        for(int i=1 ; i<row; i++) {
            for(int j=1; j<col; j++) {
                if(matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
                    
            }
        }

        //Mark Zeros
        for(int i = 1; i < row; i++) {
            for(int j = 1; j < col; j++) {
                if(matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Handle first row separately
        if(firstRowZero) {
            for(int j = 0; j < col; j++) {
                matrix[0][j] = 0;
            }
        }
        
        // Handle first column separately
        if(firstColZero) {
            for(int i = 0; i < row; i++) {
                matrix[i][0] = 0;
            }
        }        
    }
};