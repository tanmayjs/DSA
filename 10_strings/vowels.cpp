#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int x;
    string z = "aeiou";
    for (int i = 0; i <= s.size() - 1; i++)
    {
        if (s[i] == z)
            x += 1;
    }
    cout << x;
}