#include <iostream>
using namespace std;

int x = 8; // Global varibles

int main()
{
    int x = 56;
    cout << x << endl;
    cout << ::x << endl; // Accesing Global using :: if local name is same
}
