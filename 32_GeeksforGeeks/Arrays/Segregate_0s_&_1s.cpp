// Given an array arr[] consisting of only 0's and 1's. Modify the array in-place to segregate 0s onto the left side and 1s onto the right side of the array.
class Solution {
	public:
	void segregate0and1(vector<int> &arr) {
		// Method 2 (one pass)
		int i = 0, j = arr.size() - 1;
		while (i<j) {
			if (arr[i] == 0)
				i++;
			if (arr[j] == 1)
				j--;
			if (i > j)
				break;
			if (arr[i] == 1 && arr[j] == 0) {
				swap(arr[i], arr[j]);
				i++;
				j--;
				
			}
		}
		
		// method 1 (two pass)
		// int zeros = 0 ,ones =0;
		// for (int i = 0 ; i <arr.size();i++){
		//     if (arr[i]==0) zeros++;
		//     else ones++;
		// }
		// for(int i =0;i<zeros;i++){
		//     arr[i] = 0;
		// }
		// for(int i =zeros;i<arr.size();i++){
		//     arr[i] = 1;
		// }
	}
};
