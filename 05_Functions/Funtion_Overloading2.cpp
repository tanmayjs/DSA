#include <iostream>
using namespace std;
void fun(char x)
{
    cout << "Hi" << endl;
}
void fun(int x)
{
    cout << "Good morning" << endl;
}

void fun(double x)
{
    cout << "Tanmay" << endl;
}

int main()
{
    fun(6);
    fun('a');
    fun(7.0);
}