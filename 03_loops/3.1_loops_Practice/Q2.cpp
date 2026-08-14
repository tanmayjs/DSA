// Print sum of digits of a number
// last digit of the no

// 15243 = 1+5+2+4+3 = 3+4+2+5+1

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the no:";
    cin >> n;
    int rev = 0;
    while (n != 0)
    {
        rev *= 10;
        rev += (n % 10); // last digit add
        n /= 10;
    }
    cout << rev;
}