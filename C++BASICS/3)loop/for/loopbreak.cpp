// using break inside for loop
#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    int n;
    cout<<"Enter any Number";
    cin>>n;

    for(int i=0 ; i<=n ; i++)
    {
        sum = sum +i;
        if(i == 5)
        {
            break; // by using this we will only get sum till 5 even if n is bigger
        }
    }
    cout<<sum;
    return 0;
}


















