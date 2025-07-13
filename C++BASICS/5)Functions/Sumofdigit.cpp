#include <iostream>
using namespace std;
int Sumofdigit(int num)
{   
    int digitsum = 0;
    while(num > 0)
    {
        int lastdigit = num % 10;
        num = num / 10;
        digitsum = digitsum + lastdigit; 
    }   
    return digitsum;
}

int main()
{
    cout<<Sumofdigit(34)<<endl;
    cout<<Sumofdigit(33546)<<endl; // here we are adding digits of a number
    cout<<Sumofdigit(3645646)<<endl;
    return 0;
}