#include <iostream>
using namespace std;
int main()
{
     int n;
     cout<<"Enter number: ";
     cin>>n;
     bool isPrime = true;
     
     for(int i = 2; i*i<=n-1;i++) // optimization 2 to root of n 
     {
        if(n%i == 0)
        {
            isPrime = false;
            break;
        }
    }

        if(isPrime == true)
        {
            cout<<"number is prime number";
        }
        else
        {
            cout<<"number is non prime number";
        }
        return 0;
     }
 