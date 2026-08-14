#include <iostream>
using namespace std;

void minOfTwo(int a, int b)
{
    if (a > b)
        cout << a << " " << "Is Smaller";
    else
        cout << b << " " << "Is smaller";
}

int main()
{
    minOfTwo(5, 6); // 5 and 6 arearguments
}