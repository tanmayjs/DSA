#include <iostream>
using namespace std;

int main()
{
    int t = 10;
    while (t /= 2)
    {
        cout << "Hello" << endl;
    }
}

// Jab zero hoga loop exits
// 10 /2 = 5
// 5/ 2 = 2.5
// 2.5 / 2 = 1.25
// 1.25 / 2 = 0.75  Loop exits