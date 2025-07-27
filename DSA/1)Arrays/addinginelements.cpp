#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    cout<<"Enter the elements in array "<<endl;
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4]; // gets the elements in the array

    arr[0] = arr[0] + 10; // updates the elements in array
    arr[1] += 10; 
    arr[2] += 10;
    arr[3] += 10;
    arr[4] += 10;

    cout<<"Updated values of elements in array"<<endl;
    cout<<arr[0]<<endl; // prints the updated version
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    cout<<arr[3]<<endl;
    cout<<arr[4]<<endl;
    return 0;
}