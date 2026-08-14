#include <iostream>
#include <vector>
using namespace std;

int main()
{   vector<int> k; //Empty array
    vector<int> arr(8, -5); // Syntax of vector
    int n = arr.size();
    // Vector<Datatype> array [size]
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    arr.push_back(5); // adds an element at end
    arr.push_back(15);
    arr.pop_back(); // removes last element
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}