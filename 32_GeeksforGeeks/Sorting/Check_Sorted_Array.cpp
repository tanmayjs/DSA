// Check Sorted Array
// Solved
// Difficulty: EasyAccuracy: 39.37%Submissions: 441K+Points: 2Average Time: 15m
// Given an array arr[], check whether it is sorted in non-decreasing order. Return true if it is sorted otherwise false.

class Solution {
	public:
	bool isSorted(vector<int>& arr)
	{ int n = arr.size() ;
	for (int i = 0; i <= n - 2; i++) {
		if (arr[i]>arr[i + 1])
			return false;
	}
	return true;
}
};
