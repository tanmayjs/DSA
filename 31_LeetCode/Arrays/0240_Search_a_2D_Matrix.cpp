// 240. Search a 2D Matrix II
// Solved
// Medium
// Topics
// premium lock icon
// Companies
// Write an efficient algorithm that searches for a value target in an m x n
// integer matrix matrix. This matrix has the following properties:

// Integers in each row are sorted in ascending from left to right.
// Integers in each column are sorted in ascending from top to bottom

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
        int m = arr.size(), n = arr[0].size();
        int i = 0, j = n - 1;
        while (i < m && j >= 0) {
            if (arr[i][j] > target)
                j--;
            else if (arr[i][j] < target)
                i++;
            else
                return true;
        }
        return false;
    }
};
