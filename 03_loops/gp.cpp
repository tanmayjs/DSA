#include <iostream>
using namespace std;

int main()
{ // 2 5 8 11 14 17.....
    
    int n;
    cout << "Enter the no of terms:";
    cin >> n;
   
    // /1 2 4 8 16...
    // 2 6 18 64
    int a = 2;
    int r = 3;
    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";
        a *= r;
    }
}
