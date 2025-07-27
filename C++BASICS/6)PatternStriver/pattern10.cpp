// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *

#include <iostream>
using namespace std;

void pattern10(int n)
{
    for(int i = 1; i<=n; i++) // for rows of upper part
    {
        for(int j =1; j<= i; j++) // for coloums of upper part
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    for(int i = 1; i<=n-1; i++) // for rows of lower part 
    {
        for(int j=1; j<=n-i;j++) // for coloumns of upper part
        {
            cout<<"*";
        }
        cout<<endl;
    }
}


int main()
{
    pattern10(5);
    return 0;
}