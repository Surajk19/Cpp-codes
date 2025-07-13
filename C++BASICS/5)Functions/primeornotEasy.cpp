#include <iostream>
using namespace std;
int primeornot(int n)
{
    for(int i =2 ; i<= n-1; i++)
    {
        if(n%i == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}

int main()
{
    cout<<primeornot(13)<<endl; //return 1 if it is prime and 0 if it is not prime
    return 0;
}