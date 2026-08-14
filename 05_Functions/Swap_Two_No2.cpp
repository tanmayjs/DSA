#include <iostream>
using namespace std;
// void swap(int a, int b)
void swap(int& a,int& b) //Jugad
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 5;
    int b = 2;
    // swap(a,b); //Only in cpp build in
    cout << a << " " << b << endl;
    swap(a, b);
    cout << a << " " << b << endl; // it prints local varibles
    // /Swaping done 
    
}