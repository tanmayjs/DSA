// a raise to the power b
// a^b=a*a.....a(b times)

#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter the no:";
    cin >> a;
    int b;
    cout << "Enter the Exponent:";
    cin >> b;
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        if (a == 1)
            break;
        if (b == 0)
        {
            (ans = 1)
        }
        
        ans *= a;
    }
    cout << ans;
}
