class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r = matrix.size(), c = matrix[0].size();
        // vector<vector<int>> temp = matrix;
        
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                if(matrix[i][j] == 0) {
                    //rows 
                    for(int k = 0; k < r; k++) {
                        matrix[k][j] != 0 ? matrix[k][j] = 'a' : matrix[i][j] = matrix[i][j];
                    }
                    //cols
                    for(int k = 0; k < c; k++) {
                        matrix[i][k] != 0 ? matrix[i][k] = 'a' : matrix[i][j] = matrix[i][j];
                    }
                }
            }
        }
        
                
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                if(matrix[i][j] == 'a') matrix[i][j] = 0;
            }}
    }
};
