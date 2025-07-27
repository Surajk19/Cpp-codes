// A 
// A B
// A B C
// A B C D
// A B C D E

#include <iostream>
using namespace std;
void patter14(int n)
{
    for(int i = 1; i<=n;i++)
    {
        char ch = 'A';
        for(int j = 1; j<= i;j++)
        {
            cout<<ch <<" ";
            ch = ch + 1;
        }
        cout<<endl;
    }
}

int main()
{
    patter14(5);
    return 0;
}