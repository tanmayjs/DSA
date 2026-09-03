#include <iostream>

using namespace std;
int n;//global 
void print(int x)
{
    if (x > n)
        return ;
    cout << x << " ";
    print(x + 1);

}
int main()
{
  
    cin >> n;
    print(1);
}