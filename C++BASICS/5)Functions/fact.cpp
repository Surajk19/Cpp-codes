#include <iostream>
using namespace std;

int factorialof(int n)
{
    int fact = 1;
    for(int i = 1; i <= n; i++)
    {
        fact = fact*i;
    }
    return fact;
}

int main()
{
    cout<<"factorial is "<< factorialof(3)<<endl;
    cout<<"factorial is "<< factorialof(5)<<endl;
    cout<<"factorial is "<< factorialof(2)<<endl;
}