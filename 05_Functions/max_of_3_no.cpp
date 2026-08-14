#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter a no:";
    cin >> a;
    cout << "Enter a no:";
    cin >> b;
    cout << "Enter a no:";
    cin >> c;
    cout << max(a, max(b, c));
}