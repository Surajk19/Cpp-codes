#include <iostream>
using namespace std;

int sum(int a,int b)
{
    int sum = a+b;
    return sum;
}

int sub(int a,int b)
{
    int sub = a-b;
    return sub;
}

int mul(int a,int b)
{
    int mul = a*b;
    return mul;
}

int division(int a,int b)
{
    int div = a+b;
    return div;
}

int main()
{
    cout<<sum(45,12)<<endl;
    cout<<sub(45,12)<<endl;
    cout<<mul(45,12)<<endl;
    cout<<division(45,12)<<endl;
    return 0;
}