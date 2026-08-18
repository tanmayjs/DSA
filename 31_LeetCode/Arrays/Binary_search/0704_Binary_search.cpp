// 704. Binary Search
// Easy
// Topics
// premium lock icon
// Companies
// Given an array of integers nums which is sorted in ascending order, and an
// integer target, write a function to search target in nums. If target exists,
// then return its index. Otherwise, return -1.

// You must write an algorithm with O(log n) runtime complexity.

class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n = arr.size();
        int lo = 0, hi = n - 1;
        while (lo <= hi) // TC = log n
        {
            int mid = (lo + hi) / 2;
            if (arr[mid] > target)
                hi = mid - 1;
            else if (arr[mid] < target)
                lo = mid + 1;
            else
                return mid;
        }
        return -1;
    }
};
