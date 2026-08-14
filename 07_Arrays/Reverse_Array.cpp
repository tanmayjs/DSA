#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> &v)
{
    for (int ele : v)
        cout << ele << " ";
    cout << endl;
}
int main()
{
    vector<int> v = {4, 3, 8, 2, 9};
    int i = 0, j = v.size() - 1;
    int temp;
    while (i < j)
    {
        // int temp = v[i];
        // v[i] = v[j];
        // v[j] = temp;
        // i++;
        // j--;
        swap(v[i], v[j]);
        i++;
        j--;
    }
    print(v);
}