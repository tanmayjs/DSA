#include <iostream>
using namespace std;

int main()
{
    int x = 7;
    int* ptr = &x;
    // cout<<*ptr<<endl;  //* called dereference operator
    *ptr += 8;  //x += 8
    cout<<x;

}