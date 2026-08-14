#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a no:";
    cin >> n;
    // if (n % 2 == 0)
    //     cout << "even";
    // else
    //     cout << "odd";

    // in ternary
    // condition ? sach : zhoot
    // (n % 2 == 0) ? cout << "Even" : cout << "Odd";

    cout << ((n % 2 == 0) ? "Even" : "Odd");
}