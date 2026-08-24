#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a no:";
    cin>>n;

    string s = to_string(n);
    cout<<s<<endl;


    // string s = "";


    // while(n != 0){
    //     int lastDigit = n%10;
    //     char ch = lastDigit + 48;
    //     s.push_back(ch);
    //     n/= 10;
    // }
    // //reverse
    // int i = 0,j= s.size() - 1;
    // while(i<j){
    //     swap(s[i],s[j]);
    //     i++;
    //     j--;
    // }
    // cout<<s<<endl;
}