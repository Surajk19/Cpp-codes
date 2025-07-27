#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
   
    for(int i = 0; i<=n; i= i+2)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}