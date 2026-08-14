#include <iostream>
using namespace std;

int main()
{
    int sp, cp;

    cout << "Enter SP: ";
    cin >> sp;

    cout << "Enter CP: ";
    cin >> cp;

    if (cp < sp)
    {
        cout << "Profit: " << sp - cp;
    }
    else if (cp == sp)
    {
        cout << "No Profit No Loss";
    }
    else
    {
        
        cout << "Loss: " << cp - sp;
    }

    return 0;
}