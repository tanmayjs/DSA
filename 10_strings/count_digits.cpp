
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cout << "enter a NO:";
    cin >> n;

    string s = to_string(abs(n));
    cout << s.length() << endl;
}