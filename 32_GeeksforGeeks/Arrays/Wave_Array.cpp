// Given an sorted array arr[] of integers. Sort the array into a wave-like array (In Place). 
// In other words, arrange the elements into a sequence such that : arr[0] ≥ arr[1] ≤ arr[2] ≥ arr[3] ≤ arr[4] ≥ ... and so on.
// If there are multiple solutions, find the lexicographically smallest one.
// Note: The given array is sorted in ascending order, and modify the given array in-place without returning a new array.

class Solution {
  public:
   
    void sortInWave(vector<int>& arr) {
        
        for(int i = 0;i<arr.size()-1;i+=2){
            swap(arr[i],arr[i+1]);
            
        }
        
        
    }
};
