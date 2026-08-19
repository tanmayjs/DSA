// 33. Search in Rotated Sorted Array
// Solved
// Medium
// Topics
// premium lock icon
// Companies
// There is an integer array nums sorted in ascending order (with distinct values).

// Prior to being passed to your function, nums is possibly left rotated at an unknown index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be left rotated by 3 indices and become [4,5,6,7,0,1,2].

// Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

// You must write an algorithm with O(log n) runtime complexity.

#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n = arr.size();
        int lo = 0, hi = n - 1;

        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;

            // Target found
            if (arr[mid] == target)
                return mid;

            // Check if the left half is sorted
            if (arr[lo] <= arr[mid]) {
                // Target lies in the left sorted portion
                if (arr[lo] <= target && target < arr[mid]) {
                    hi = mid - 1;
                } else {
                    lo = mid + 1;
                }
            }
            // Otherwise, the right half must be sorted
            else {
                // Target lies in the right sorted portion
                if (arr[mid] < target && target <= arr[hi]) {
                    lo = mid + 1;
                } else {
                    hi = mid - 1;
                }
            }
        }

        return -1; // Target not found
    }
};
