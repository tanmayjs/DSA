#include <iostream>
using namespace std;

int x = 8; // Global varibles
void fun()
{
    x = 23;
}
int main()
{
    cout << x << endl;
    fun();
    cout << x;
}
