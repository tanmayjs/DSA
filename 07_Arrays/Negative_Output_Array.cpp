#include<iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter Array size:";
    cin >> n;
    int arr[n];
    cout << "Enter Array ELements :";
    // Input
    for (int i = 0; i <= n; i++)
    {
        cin >> arr[n];
    }
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] < 0)
            cout << arr[i] << " ";
    }
}