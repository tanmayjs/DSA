#include <iostream>

using namespace std;
int n;//global 
void print(int n)
{
    if (n ==0)
        return ;
    print(n-1);
    cout<<n<<" ";

}
int main()
{
    int n;
    cout<<"Enter a No";
    cin >> n;
    print(n);
}