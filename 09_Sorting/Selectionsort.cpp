#include <iostream>
#include <vector>
using namespace std;
void print(vector<int> &arr)
{
    for (int ele : arr)
    {
        cout << ele << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> arr = {5, 4, 3, 6, 2, 1};
    int n = arr.size();
    print(arr);
    int totalswaps = 0;
    int mn = arr[0], mnIdx = 0;

    for (int j = 0; j < n - 1; j++)
    {
        for (int i = j; i < n; i++)
        {
            if (arr[i] < mn)
            {
                mn = arr[i];
                mnIdx = i;
            }
        }
        swap(arr[j], arr[mnIdx]);
    }

    cout << totalswaps << endl;
    print(arr);
}