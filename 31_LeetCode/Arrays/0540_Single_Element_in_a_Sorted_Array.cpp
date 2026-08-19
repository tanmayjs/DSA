// 540. Single Element in a Sorted Array
// Medium
// Topics
// premium lock icon
// Companies
// You are given a sorted array consisting of only integers where every element
// appears exactly twice, except for one element which appears exactly once.

// Return the single element that appears only once.

// Your solution must run in O(log n) time and O(1) space.

class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int n = arr.size();
        int lo = 0;
        if (n == 1)
            return arr[0];
        if(arr[0] != arr[1]) return arr[0];
        if(arr [n-1] != arr[n-2]) return arr[n-1];
        int hi = n - 1;
        if (n == 1)
            return arr[0];
        
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1])
                return arr[mid];
            int f = mid, s = mid;
            if (arr[mid - 1] == arr[mid])
                f = mid - 1;
            else
                s = mid + 1;
            int leftlen = f - 1;
            if ((f - lo) % 2 == 1)
                hi = f - 1; // f-1 is ldt side lenght
            else
                lo = s + 1;
        }
        return 6969;
    }
};
