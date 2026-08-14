#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter value of x:";
    cin >> x;
    // if (x > 999)
    //     cout << "It is four digit no";
    // else if (x < 9999)
    //     cout << "It is four digit no";
    // else
    //     cout << "NO is not a four digit ";

    // if (x >= 1000 and x <= 9999)
    //     cout << "It is a four digit no"; 
    // Valid in cpp


    // && also valid

    // and == &&
    if (x >= 1000 && x <= 9999) 
        cout << "It is a four digit no";
    else
        cout << "not a four digit no";
}