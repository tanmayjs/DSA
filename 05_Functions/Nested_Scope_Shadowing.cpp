#include <iostream>
using namespace std;

int main()
{
    int x = 80;
    {
        int x = 6; //initiolizing (New variabble)
        // Limited for block only
        // x = 8; //(isse main vala update hoga)

    }
    cout << x;
   
}


