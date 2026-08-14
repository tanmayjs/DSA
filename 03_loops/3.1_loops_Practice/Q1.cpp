// count digits o fnumber

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the no:";
    cin >> n;
    int count = 0;
    if (n == 0)
        count++;
    
    while (n != 0)
    {
        n /= 10;
        count++;
        // n++;
    }
    cout << count;
}