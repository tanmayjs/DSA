#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int x, y, z;
    cout << "Enter the value of x:";
    cin >> x;
    cout << "Enter the value of y:";
    cin >> y;
    cout << "Enter the value of z:";
    cin >> z;

    if (x + y > z && x + z > y && y + z > x)
        cout << "Valid Traingle";
    else
        cout << "Invalid Traingle";
}