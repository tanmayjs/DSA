// 34. Find First and Last Position of Element in Sorted Array
// Medium
// Topics
// premium lock icon
// Companies
// Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

// If target is not found in the array, return [-1, -1].

// You must write an algorithm with O(log n) runtime complexity.

class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        int n = arr.size();
        vector<int> ans(2, -1);
        int lo = 0;
        int hi = n - 1;
        //first
        while (lo <= hi) // TC = log n
        {
            int mid = (lo + hi) / 2;
            if (arr[mid] > target)
                hi = mid - 1;
            else if (arr[mid] < target)
                lo = mid + 1;
            else { // arr [mid] == target
                ans[0] = mid;
                hi = mid - 1;
            }
        }
        //Last Occurence 
        lo = 0;
        hi = n - 1;
        while (lo <= hi) // TC = log n
        {
            int mid = (lo + hi) / 2;
            if (arr[mid] > target)
                hi = mid - 1;
            else if (arr[mid] < target)
                lo = mid + 1;
            else { // arr [mid] == target
                ans[1] = mid;
                lo = mid + 1;
            }
        }
        return ans;
    }
};
