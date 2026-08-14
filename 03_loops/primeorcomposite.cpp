#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the no:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % 1 == 0 || n % n == 0)
        {
            cout << "Prime no";
            break;
        }
    }
}
