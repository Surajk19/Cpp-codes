// print sum of even numbers from 1 to n by for loop

#include <iostream>
using namespace std;
int main()
{
    int n = 20;
    cout<<"Enter a Number: "<<endl;
    int sumEven = 0;

    for(int i = 0; i <= n; i++)
    {
        if(i%2 == 0)
        {
            sumEven = sumEven + i;
        }
    }
    cout<<sumEven<<endl;
    return 0;
}