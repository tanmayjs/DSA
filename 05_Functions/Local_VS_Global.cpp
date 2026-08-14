#include <iostream>
using namespace std;

int x = 8; // Global varibles

void change()
{   x = 45;
}
int main()
{
    int x = 80; // Local Variable
    cout << x << endl;
    change();
    cout << x << endl;
}

// Alag alag dabbe
