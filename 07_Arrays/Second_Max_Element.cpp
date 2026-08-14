#include <iostream>
using namespace std;

int main()
{
    int arr[] = {4, 2, 6, 8, 1, 9, 552};
    int n = sizeof(arr) / sizeof(arr[0]);

    int mx = arr[0];
    int mx2 = arr[0];

    // Find maximum
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > mx)
        {
            mx = arr[i];
        }
    }

    // Find second maximum
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != mx && arr[i] > mx2)
        {
            mx2 = arr[i];
        }
    }

    cout << "Maximum element: " << mx << endl;
    cout << "Second maximum element: " << mx2 << endl;

    return 0;
}