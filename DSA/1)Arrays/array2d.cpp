#include <iostream>
using namespace std;
int main()
{
    int arr[3][2];   // R/C 0   1   2 
                       
    arr[0][0] = 11;  // 0   11  11  11
    arr[0][1] = 11;  // 1       12
    arr[0][2] = 11;  // 2       12
    arr[2][1] = 12;  // 3       23
    arr[1][1] = 12;
    arr[3][2] = 23;
    cout<<arr[3][2];
    return 0;
}