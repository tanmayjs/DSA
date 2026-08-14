#include <iostream>
using namespace std;

int main()
{
    // int n;
    // cout << "Enter no of star square:";
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // Method 2
    int n;
    cout << "Enter no of star square:";
    cin >> n;
    for (int i = n; i >= 1 ; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}