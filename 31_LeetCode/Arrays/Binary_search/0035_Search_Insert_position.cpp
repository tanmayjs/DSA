// 35. Search Insert Position
// Easy
// Topics
// premium lock icon
// Companies
// Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

// You must write an algorithm with O(log n) runtime complexity.
class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
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
        return lo ;
        
    }
};
