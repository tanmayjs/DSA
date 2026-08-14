#include <iostream>
using namespace std;

int main()
{
    int n ,e;
    cout << "Enter no of star square:";
    cin >> n;
    e = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << e++<< " ";
        }
        cout << endl;
    }
}