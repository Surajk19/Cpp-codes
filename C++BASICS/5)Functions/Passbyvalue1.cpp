#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a+b;
}

int main()
{
    int x = 4;
    int y = 5;
    cout<<sum(x,y)<<endl; // here the x,y are the copies of a and b
    return 0;
}