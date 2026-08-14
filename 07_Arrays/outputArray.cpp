#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int arr[] = {74, 96, 13, 121, 44}; // Starts with index 0
    int n = sizeof(arr) / 4;
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
}