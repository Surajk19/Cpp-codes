#include <iostream>
using namespace std;
int funcx(int a)
{
    a = a*2;
    cout<<"a ="<<a<<endl;
}

int main()
{
    int a = 10;
    funcx(a);

    cout<<"a ="<<a<<endl;
    return 0;
}