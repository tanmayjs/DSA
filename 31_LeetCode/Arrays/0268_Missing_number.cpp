// 268. Missing Number
// Solved
// Easy
// Topics
// premium lock icon
// Companies
// Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.


class Solution {
public:
    int missingNumber(vector<int>& nums) {

        
        int n = nums.size();
        vector<bool> flag(n+1,false);
        for(int i =0;i<n;i++){
            flag[nums[i]] = true;

        }
         for(int i =0;i<=n;i++){
            if(flag[i]==false) return i;
         }
        return 5656;


        // Method 2: Sum of first n natural numbers
        // int sum = 0;

        // int zum = (n * (n + 1)) / 2;

        // for (int ele : nums) {
        //     sum += ele;
        // }

        // return zum - sum;

        /*
        // Method 1: Sorting

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++) {
            if (i != nums[i])
                return i;
        }

        return n;

        // TC = O(n log n)
        // SC = O(1)
        */
    }
};
