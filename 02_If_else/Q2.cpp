#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter value of x:";
    cin >> x;
    // if (x % 3 == 0 or x % 5 == 0)
    //     cout << "It is divisible by 3 or 5";
    // Also valid 
    // or == ||



    if (x % 3 == 0 || x % 5 == 0)
        cout << "It is divisible by 3 or 5";
    else
        cout << "It is not divisible by 3 or 5";


    // Short ckting is valid
    // if first condition is true next condition is not checked 
}