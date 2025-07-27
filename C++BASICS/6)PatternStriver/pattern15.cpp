// ABCDE
// ABCD
// ABC
// AB
// A

#include <iostream>
using namespace std;
void patter15(int n)
{
    for(int i = 1; i<=n;i++)
    {
        char ch = 'A';
        for(int j = n; j>=i;j--)
        {
            cout<<ch;
            ch = ch + 1;
        }
        cout<<endl;
    }
}

int main()
{
    patter15(5);
    return 0;
}