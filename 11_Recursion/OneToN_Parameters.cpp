#include <iostream>

using namespace std;

void print(int x,int n)
{
    if (x > n)
        return ;
    cout << x << " ";
    print(x + 1,n);

}
int main()
{
    int n;//global 
    cin >> n;
    print(1,n);
}