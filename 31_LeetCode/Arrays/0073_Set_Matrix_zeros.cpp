// 73. Set Matrix Zeroes
// Solved
// Medium
// Topics
// premium lock icon
// Companies
// Hint
// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

// You must do it in place.

class Solution {
public:
    void setZeroes(vector<vector<int>>& arr) {
        // vector<vector<int>> copy = arr;
        int m = arr.size(), n = arr[0].size();
        vector<bool> row(m, false);
        vector<bool> col(n, false);
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (arr[i][j] == 0) {
                    row[i] = true;
                    col[j] = true;
                }
            }
        }
        for (int i = 0; i < row.size(); i++) {
            if (row[i] == true) {
                // set ith row of arr to 0
                for (int j = 0; j < n; j++) {
                    arr[i][j] = 0;
                }
            }
        }
        for (int j = 0; j < col.size(); j++) {
            if (col[j] == true) {
                // set ith row of arr to 0
                for (int i = 0; i < m; i++) { // FIXED: changed j++ to i++ to
                                              // prevent infinite loop
                    arr[i][j] = 0;
                }
            }
        }

        // for (int i = 0; i < m; i++) {
        //     for (int j = 0; j < n; j++) {
        //         if (copy[i][j] == 0) {
        //             // set ith row to 0
        //             for (int col = 0; col < n; col++) {
        //                 arr[i][col] = 0;
        //             }
        //             for (int row = 0; row < m; row++) {
        //                 arr[row][j] = 0;
        //             }
        //         }
        //     }
        // }
    }
};
