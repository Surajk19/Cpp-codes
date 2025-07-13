#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin >> n;
    bool isPrime = true;
    
    for(int i=2; i<=n-1 ; i++)
    {
        if(n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if(isPrime == 0)
    {
        cout<<"It is a prime a number.";
    }
    else
    {
        cout<<"It is a non prime number.";
    }
    return 0;
}