#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for(int i= 0; i<n; i++)
    {
        for(int j = 0; j<n-i-1; j++) //spaces n-i-1
        {
            cout<<" ";
        }        
        for(int j = 1 ;j<=i+1; j++)//num 1: 1 to i+1 (1 to increasing)
        {
            cout<<j;
        }
        for(int j = i; j>0; j--)//num 2: reverse patter n to 1
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}