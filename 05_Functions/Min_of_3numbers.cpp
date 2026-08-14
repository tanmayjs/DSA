#include <iostream>
using namespace std;

void minOfTwo(int a, int b, int c)
{
    if (a > b and a > c)
        cout << a << " " << "Is Smaller";
    else if (b > a and b > c)
        cout << b << " " << "Is smaller";
    else
        cout << c << " " << "Is smaller";
}

int main()
{
    minOfTwo(5, 6, 7); // 5 and 6 arearguments
}