// *********
//  *******
//   *****
//    ***
//     *

#include <iostream>
using namespace std;

void pattern8(int n)
{
    for(int i = 0; i < n; i++)
    {
        //spaces
        for(int j = 0; j< i; j++)
        {
            cout<<" ";
        }
        for(int j = 0; j< 2*n- (2*i+1); j++) // i = 0 [0, 9, 0]
        {                                    // i = 1 [1, 7, 1]
            cout<<"*";                       // i = 2 [2, 5, 2]
        }                                    // i = 3 [3, 3, 3]
          for(int j = 0; j< i; j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int n =5;
    pattern8(n);
    return 0;
}