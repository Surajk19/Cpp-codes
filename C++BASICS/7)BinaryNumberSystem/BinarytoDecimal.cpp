#include<iostream>
using namespace std;
int BinarytoDecimal(int binNum)
{
    int ans = 0; // upcoming decimal number
    int pow = 1; // 2^0 -> 2^1 -> 2^2
    
    while(binNum > 0)
    {
    int rem = binNum % 10; // will give last digit of the binary number
    ans = ans + rem * pow; // multily each last digit with multiple of 2 and add in answer

    binNum = binNum / 10; // update binary will give the remaining number excluding the rem last digit
    pow = pow * 2; // update power into multiple of 2
    }
    return ans;
}

int main()
{
    int BinaryNumber = 1011;
    cout<<BinarytoDecimal(BinaryNumber)<<endl;
    return 0;
}