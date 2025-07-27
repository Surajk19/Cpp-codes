#include <iostream>
using namespace std;

int main()
{
    int ChaiServed[7] = {23, 34, 54, 23, 54, 23, 53}; // created array that can store 7 elements    
    for(int i = 0; i < 7; i++) // indexing from 0 to 6
    {
       cout<<"Chai served on day "<<i<<" :"<<ChaiServed[i]<<endl; // prints each number in array
    }
    return 0;
}