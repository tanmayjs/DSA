#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int arr[] = {4, 2, 6, 8, 1, 9, 552};
    int n = sizeof(arr) / 4;
    
    // Start max with the first element
    int max = arr[0]; 
    // int max = INT_MIN;
    
    // Loop through the remaining elements
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "Maximum element: " << max << endl;
    
}