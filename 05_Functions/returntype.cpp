#include <iostream>
using namespace std;

int product(int a, int b)
{
    return a * b;
}

int main()
{
    int x = product(4, 11);
    // cout << x;
    product(5,4);
    return 0;
}