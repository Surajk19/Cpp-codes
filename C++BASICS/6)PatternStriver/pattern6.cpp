// 123456
// 12345
// 1234
// 123
// 12
// 1

#include <iostream>
using namespace std;

void pattern5(int n)
{
    for(int i = 1 ; i<=n;i++)
    {
        for(int j=1; j<=n-i+1;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter the number :";
    cin>>n;
    pattern5(n);
    return 0;
}