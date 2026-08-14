#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(5);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(9);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(0);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(8);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.pop_back();
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.pop_back();
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    cout<<v.size()<<" "<<v.capacity()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}