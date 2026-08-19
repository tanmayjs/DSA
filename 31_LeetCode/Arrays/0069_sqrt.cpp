// 69. Sqrt(x)
// Solved
// Easy
// Topics
// premium lock icon
// Companies
// Hint
// Given a non-negative integer x, return the square root of x rounded down to
// the nearest integer. The returned integer should be non-negative as well.

// You must not use any built-in exponent function or operator.

// For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.

class Solution {
public:
    int mySqrt(int n) { //TC = O(log n) -> Changed from mysqrt to mySqrt
        if (n == 0) return 0;
        int lo = 1, hi = n;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (mid > n / mid) {
                hi = mid - 1;
            }
            else if (mid < n / mid) {
                lo = mid + 1;
            }
            else {
                return mid;
            }
        }
        return hi;
    }
    // int mySqrt(int x) {  TC = O(sqrt(n))
    //     for (int i = 1; i <= x; i++) {
    //         if (i == x / i)
    //             return i; // i*i = x
    //         if (i > x / i)
    //             return i - 1; // i*i> x
    //     }
    //     return 0;
    // }
};
