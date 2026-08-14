#include <iostream>
#include <vector>
using namespace std;

int main()
{   
    // int arr[3][4];
    int sum =0;
    int arr[][4] = {{5,8,1,2},{9,9,4,4},{7,0,3,5}};
    
    for(int j = 0;j<4;j++){
        for(int i=0;i<3;i++){
            // cout<<arr[i][j]<< " ";
            sum += arr[i][j];
        }
        // cout<<endl;
        
    }
    cout<<sum;
}

//     for(int i=0;i<3;i++){
//         for(int j = 0;j<4;j++){
//             cout<<arr[i][j]<< " ";
//         }
//         cout<<endl;
//     }
// 
