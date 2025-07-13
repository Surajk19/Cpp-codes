#include <iostream>
using namespace std;

int DecimaltoBinary(int DecNum)
{
    int ans = 0, pow = 1; // ans = upcoming binary number & pow = 10^0 -> 10^1 -> 10^2

    while(DecNum > 0)
    {
        int remainder = DecNum % 2; // calculate remainder
        DecNum = DecNum / 2; // Update decimal number

        ans = ans + (remainder * pow); // remainder * by multiple of 10 and added to ans
        pow = pow * 10; // Update power multiple of 10 
    }
    return ans;
}

int main()
{
    for(int i = 0; i <= 25; i++)
    {
        cout<<i<<"="<<DecimaltoBinary(i)<<endl;
    }
    return 0;
}