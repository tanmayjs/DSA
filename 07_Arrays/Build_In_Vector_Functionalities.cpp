#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {4, 3, 8, 2, 9};
    // Sort
    sort(v.begin(),v.end());
    for(int ele : v) cout << ele <<" ";
    cout<<endl;
    sort(v.begin()+1,v.end());
    for(int ele : v) cout << ele <<" ";
    cout<<endl;
    reverse(v.begin(),v.end());
    for(int ele : v) cout << ele <<" ";
    cout<<endl;
    reverse(v.begin()+1,v.end());
    for(int ele : v) cout << ele <<" ";
    cout<<endl;

    
}