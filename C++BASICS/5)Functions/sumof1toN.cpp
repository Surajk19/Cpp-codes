#include <iostream>
using namespace std;

int Sumofnumbers(int n)
{   
    int sum = 0;
    for(int i = 0;i<=n;i++)
    {
        sum = sum + i;
    }
    return sum;
}

int main()
{
    cout<<Sumofnumbers(5)<<endl;
    cout<<Sumofnumbers(10)<<endl;
    cout<<Sumofnumbers(15)<<endl;
    cout<<Sumofnumbers(20)<<endl;

    return 0;
}