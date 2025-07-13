#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin >> n;
    int Sum = 0;

    for(int i = 0; i<=n ; i++)
    {
        if(i%3 == 0)
        {
           Sum = Sum + i;
        }
    }
    cout<<"the sum is:" << Sum;
    return 0;
}