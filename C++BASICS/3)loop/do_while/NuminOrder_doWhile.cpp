#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int i = 1;

    do{
        cout<<i<<" ";
        i++;
    }
    while(i<=n);
    
    cout<<endl;
    return 0;
}