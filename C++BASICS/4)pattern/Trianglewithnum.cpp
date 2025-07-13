#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for(int i = 0; i< n; i++) // the loop will run 5 times and print in 5 lines
    {
        for(int j = 1; j<=i+1; j++) // will run start from 1 and will run till i+1 
        {
            cout <<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}