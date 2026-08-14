#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int marks[] = {74, 96, 13, 121,44}; // Starts with index 0
    // cout<<marks<<endl;
    // cout << marks[2] << endl;
    // marks[2] = 23;
    // cout << marks[2] << endl;
    // cin >> marks[2]; // Updation
    // cout << marks[2] << endl;
    // lenght  = no of elemnts
    // cout<<size(marks);  workd but gives error in old compilers
    cout << sizeof(marks) / 4 << endl;
}