class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> arr(numRows, vector<int>(0));
        arr[0] = {1};
        if(numRows == 1) return arr;
        arr[1] = {1, 1};
        if(numRows == 2) return arr;

        for(int r = 2; r < numRows; r++) {
            arr[r].push_back(1);
            
            for(int i = 0; i < (arr[r-1].size())-1; i++) {
                arr[r].push_back(arr[r-1][i] + arr[r-1][i+1]);
            }
            
            arr[r].push_back(1);
            cout << arr[r].size();
        }
        
        return arr;
    }
};
