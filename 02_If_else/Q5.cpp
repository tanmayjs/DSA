#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int w, x, y, z;
    // cout << "Enter the value of w:";
    // cin >> w;
    cout << "Enter the value of x:";
    cin >> x;
    // cout << "Enter the value of y:";
    // cin >> y;
    // cout << "Enter the value of z:";
    // cin >> z;

    if (x % 3 == 0 and x % 5 == 0)
        cout << "Anuj";
    else if (x % 5 == 0)
        cout << "Kartikey";
    else if (x % 3 == 0)
        cout << "Sakhi";

    else
        cout << "Hitesh";
}
