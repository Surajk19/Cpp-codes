#include <iostream>
using namespace std;

int countof(int num)
{
    int count = 0;
    if (num == 0) return 1;
    while(num != 0)
    {
        num = num / 10;
        count++;
    }
    return count;

}
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
    cout<<countof(34)<<endl;
    cout<<Sumofdigit(34)<<endl;
    cout<<countof(33546)<<endl;
    cout<<Sumofdigit(33546)<<endl;
    cout<<countof(3645646)<<endl;
    cout<<Sumofdigit(3645646)<<endl;
    cout<<Sumofdigit(34)-countof(34)<<endl;
    cout<<Sumofdigit(33546)-countof(33546)<<endl; // here we are adding digits of numbers toget
    cout<<Sumofdigit(3645646)-countof(3645646)<<endl;
    return 0;
}