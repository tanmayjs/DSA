
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s = "Bhavya";
    string sub = s.substr(0,3); //0  se start 3 lenght ka
    cout<<sub<<endl;

  
    
    string SUB = s.substr(1,3); //1 se start 3 lenght ka
    cout<<SUB<<endl;
    cout<<s.substr(2)<<endl; // 2 to end
}