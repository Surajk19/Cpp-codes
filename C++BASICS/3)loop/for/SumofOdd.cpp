// Sum of all odd numbers from 1 to n

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a numbers: ";
    cin>>n;
    int sumOdd = 0;

    for(int i=0 ;i <=n ; i++)
    {
        if(i%2 != 0)
        {
              sumOdd = sumOdd + i;
        }
    }
    cout<<sumOdd<<endl;
    return 0;
}  
    