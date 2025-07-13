#include <iostream>
using namespace std;

int minoftwo(int a, int b) // and here int a & int b are parameters which is a varible defined within the paranthesis
{
    if(a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    cout<<"Minimum number is : "<< minoftwo(34,54); // here 34,54 are arguments that we have pass down to the function
    return 0;
}