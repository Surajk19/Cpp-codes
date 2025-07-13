#include <iostream>
using namespace std;

int sum(int a, int b)
{
    a = a + 23;
    b = b + 23;
    return a+b;
}

int main()
{
    int a = 4;
    int b = 5;
    cout<<sum(a,b)<<endl;
    cout<<a<< endl;
    cout<<b<< endl; //here a & b in sum() and main() are stored at different location
    return 0;
}