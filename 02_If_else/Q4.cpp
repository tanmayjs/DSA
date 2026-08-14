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

    if (x >= y and x >= z)
        cout << "The gretest no is:" << x;
    else if (y >= x and y >= z)
        cout << "The gretest no is:" << y;
    else
        cout << "The gretest no is:" << z;
}