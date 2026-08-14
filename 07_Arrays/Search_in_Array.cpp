#include <iostream>
using namespace std;

int main()
{
    int k;
    int arr[] = {74, 96, 9, 57, 62, 35, 5, 1, 88, 34, 90, 103};
    int n = sizeof(arr) / 4;
    cin >> k;
    bool flag = false;
    for (int i = 0; i <= n; i++)
    {
        if (k == arr[i])
        {
            flag = true;
            cout << k << " is Present in Array" << endl;
            break;
        }
    }
    if (flag == true) cout<<"Element Found"<<endl;
    else cout<<"Element Not found "<<endl;
}
