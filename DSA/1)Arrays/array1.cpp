#include <iostream>
using namespace std;

int main()
{
    int arr[5] = { 45, 32, 23, 45, 32};
    cout<<"Here is the marks studenst got of out 50: "<<endl;

    for(int i = 0; i < 5; i++)
    {
        cout<<"student - "<<i<<") "; 
        cout<<arr[i]<<endl; // prints the elements as it is
    }
    cout<<endl;

    cout<<"Here is the marks students got after practice: "<<endl;
    for(int i = 0; i < 5; i++)
    {
        cout<<"student - "<<i<<") ";
        cout<<arr[i] + 5<<endl; // prints the elements in array by adding 5 to each element 
    }
    return 0;
}