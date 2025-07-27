// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********

#include <iostream>
using namespace std;

void pattern19_1(int n)
{
    for(int i=0; i<n;i++)
    {
        // for stars
        for(int j = 1; j <= n-i; j++)
        {
            cout<<"*";
        }
        // for spaces
        for(int j = 1; j<=i*2; j++)
        {
            cout<<" ";
        }
        // for stars
        for(int j = 1; j <= n-i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern19_2(int n)
{
    for(int i=1; i<=n;i++)
    {
        // for stars
        for(int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        // for spaces
        for(int j = 1; j<= 2*(n-i); j++)
        {
            cout<<" ";
        }
        // for stars
        for(int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

int main()
{
    pattern19_1(5);
    pattern19_2(5);
    return 0;
}