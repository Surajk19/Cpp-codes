#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if(n <= 1)
    {
        return false;
    }

    for(int i = 2; i <= n-1;i++)
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int number;
    cout<<"Enter a number: ";
    cin>>number;

    if (isPrime(number))
    {
        cout<<"It is a prime number."<<endl;
    }
    else
    {
        cout<<"It is not a prime number."<<endl;
    }
    return 0;
}