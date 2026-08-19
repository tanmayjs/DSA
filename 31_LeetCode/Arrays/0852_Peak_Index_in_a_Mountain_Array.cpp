// 852. Peak Index in a Mountain Array
// Attempted
// Medium
// Topics
// premium lock icon
// Companies
// You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.

// Return the index of the peak element.

// Your task is to solve it in O(log(n)) time complexity.
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int lo = 1;
        int hi = n - 2;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (arr[mid - 1] < arr[mid] && arr[mid] < arr[mid + 1])
                lo = mid + 1;
            else if (arr[mid - 1] > arr[mid] && arr[mid] > arr[mid + 1])
                hi = mid - 1;
            else
                return mid;
        }
        return 0;
    }
};
