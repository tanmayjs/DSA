#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    cout << a << " " << b << endl;
    int temp = a;
    // a = b;
    // b = a;
    // cout << a << " " << b << endl;
    a = b;
    b = temp;
    cout << a << " " << b << endl;
}