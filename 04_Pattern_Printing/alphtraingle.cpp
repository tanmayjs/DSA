#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << (char)(j + 64) << " ";
            // Type casting
        }
        cout << endl;
    }
}