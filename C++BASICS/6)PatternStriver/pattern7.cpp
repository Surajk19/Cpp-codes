//     *    
//    ***
//   *****
//  *******
// *********

#include <iostream>
using namespace std;

void pattern7(int n)
{
    for(int i =0; i<n; i++)
    {
    //spaces                        // if n = 5
    for(int j = 0; j< (n-i-1); j++) // for i = 0 [4 spaces, 1 star, 4spaces ] for 1st loop from 1 to n-i+1                                 // for i = 0 [4 spaces, 1 star, 4spaces]
    {                               // for i = 1 [3 spaces, 3 stars, 3spaces] for 2nd loop from 1 to 2*n+1
        cout<<" ";                  // for i = 2 [2 spaces, 5 stars, 2spaces] for 3rd loop from 1 to n-i+1
    }
    //stars
    for(int j = 0; j< (2*i+1); j++)
    {
        cout<<"*";
    }
    //spaces
    for(int z = 0; z<  (n-i-1); z++)
    {
        cout<<" ";
    }
    cout<<endl;
}
}

int main()
{
    int n = 5;
    pattern7(n);
    return 0;
}