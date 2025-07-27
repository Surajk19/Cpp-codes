// A 
// B B
// C C C
// D D D D
// E E E E E

#include <iostream>
using namespace std;
void patter16(int n)
{
    char ch = 'A';
    for(int i = 1; i<=n;i++)
    {
        for(int j = 1; j<= i;j++)
        {
            cout<<ch <<" ";
        }
        ch = ch + 1;
        cout<<endl;
    }
}

int main()
{
    patter16(5);
    return 0;
}