#include <iostream>
using namespace std;
int bitwiseoperatorAND(int a, int b)
{
    return a & b;
}
int bitwiseoperatorOR(int a, int b)
{
    return a | b;
}
int bitwiseoperatorXOR(int a, int b)
{
    return a ^ b;
}

int main()
{
    int num1 = 3;
    int num2 = 7;
    cout<<bitwiseoperatorAND(num1,num2)<<endl;
    cout<<bitwiseoperatorOR(num1,num2)<<endl;
    cout<<bitwiseoperatorXOR(num1,num2)<<endl;
    return 0;
}