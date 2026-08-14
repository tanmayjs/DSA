#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    cout << a << " " << b << endl;

    a = a + b;
    b = a - b;
    a = a - b;
    //a = (a+b)-(a=b)  insted we use only 1 line

    // int temp = a;

    // a = b;
    // b = a;
    // cout << a << " " << b << endl;
    // a = b;
    // b = temp;

    cout << a << " " << b << endl;
}