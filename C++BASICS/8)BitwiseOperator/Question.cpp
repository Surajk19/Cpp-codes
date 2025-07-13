// Q) Figure out how to find if a number is power of 2 without any loop  

#include <iostream>
using namespace std;

bool ispowerof(int number)
{
    if(number <= 0) // checks if it is less than 0
    {
        return false; // ends here if it is less than 0
    }

    if((number & (number-1)) == 0) // if we use Bitwise operator it comes down to bits and their operation 
    {                              // Suppose n = 4 then it will perform and between 4 and 3
        return true;               // means if 100 & 11 = 000 Also for 5 it will be 101 & 100 = 100
    }
    else
    {
        return false; //  returns false it it not 0
    }
}

int main()
{
    int n = 5;

    if(ispowerof(n)) 
    {
        cout<<"Number is a power of 2"<<endl; // returns this if the ispowerof returns true
    }
    else 
    {
        cout<<"Number is not a power of 2"<<endl; // returns this if the ispowerof returns false
    }
    return 0;
}