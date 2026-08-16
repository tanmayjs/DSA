// 54. Spiral Matrix
// Solved
// Medium
// Topics
// premium lock icon
// Companies
// Hint
// Given an m x n matrix, return all elements of the matrix in spiral order.



#include <vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& arr) {
        vector<int> ans;
        if (arr.empty() || arr[0].empty())
            return ans;

        int m = arr.size(), n = arr[0].size();
        int minr = 0, maxr = m - 1;
        int minc = 0, maxc = n - 1;

        while (minr <= maxr && minc <= maxc) {
            // 1. Traverse Right
            for (int j = minc; j <= maxc; j++) {
                ans.push_back(arr[minr][j]);
            }
            minr++;
            if (minr > maxr || minc > maxc)
                break;

            // 2. Traverse Down
            for (int i = minr; i <= maxr; i++) {
                ans.push_back(arr[i][maxc]);
            }
            maxc--;
            if (minr > maxr || minc > maxc)
                break;

            // 3. Traverse Left
            for (int j = maxc; j >= minc; j--) {
                ans.push_back(arr[maxr][j]);
            }
            maxr--;
            if (minr > maxr || minc > maxc)
                break;

            // 4. Traverse Up
            for (int i = maxr; i >= minr; i--) {
                ans.push_back(arr[i][minc]);
            }
            minc++;
            if (minr > maxr || minc > maxc)
                break;
        }

        return ans;
    }
};
