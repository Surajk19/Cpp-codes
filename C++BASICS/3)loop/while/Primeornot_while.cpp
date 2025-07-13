#include <iostream>
using namespace std;
int main()
{
    int i=2;
    int n;
    cin>>n;
    while(i<=n-1) // from 2 to (n-1) we have to check
    {
        if(n%i == 0) // i should be smaller than n
        {
            cout<<"Not Prime number"; 
            return 0;
        }
        else
        {
            i+=1;
        }
    }
    cout<<"Prime number";
    return 0;
}