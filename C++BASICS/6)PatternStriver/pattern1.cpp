// *****
// *****
// *****
// *****
// *****

#include <iostream>
using namespace std;

void pattern1(int n)
{
     for(int i = 0; i < n; i++)    // As the i = 0 it goes to inner loop for j = 0 it will print a star
    {                             // for j = 1 it will print another star for j=2 and j=3 all in same line
        for(int j = 0; j <n; j++) // cause we are still in i = 0 for j =4 it will fail as the condition is j<4
        {                         // the inner loop ends and endl gets us to next line then again on the outer loop                              // where
            cout<<"*";            // where the process repeats for i=1 and so on till i =3
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter the stars you want to print :";
    cin>>n;
    pattern1(n);
    return 0;
}