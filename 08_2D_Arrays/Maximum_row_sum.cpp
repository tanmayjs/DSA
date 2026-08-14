#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int maxrow = -1, maxsum = INT_MIN;

    int arr[][4] = {
        {5, 8, 1, 2},
        {9, 9, 4, 4},
        {7, 0, 3, 5}};

    for (int i = 0; i < 3; i++)
    {
        int sum = 0;

        for (int j = 0; j < 4; j++)
        {
            sum += arr[i][j];
        }

        if (sum > maxsum)
        {
            maxsum = sum;
            maxrow = i;
        }
    }

    cout << maxrow << endl;
}