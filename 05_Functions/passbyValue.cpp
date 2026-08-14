#include <iostream>
using namespace std;

void change(int x)
{
    x = 20;
}
int main()
{
    int x = 10;
    change(x);
    cout << x << endl;
}

// Ek change funtion ka x banega and
// Ek Main ka  x banega
// Do alag alag dabbe
// change ka x update hoga

// na ki main ka