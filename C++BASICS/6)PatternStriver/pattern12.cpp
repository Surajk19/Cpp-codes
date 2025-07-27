// 1       1
// 12     21
// 123   321
// 1234 4321

#include <iostream>
using namespace std;

void pattern12(int n)
{  
    int spaces = 2*(n-1);
    for(int i=0; i<n;i++)
    {
        for(int j=1; j<=i;j++)
        {
            cout<<j;
        }
        for(int j = 0; j<= spaces;j++)
        {
            cout<<" ";
        }
        for(int j=i; j>=1;j--)
        {
            cout<<j;
        }
        cout<<endl;
        spaces = spaces - 2;

    }
}

int main()
{
    pattern12(5);
    return 0;
}